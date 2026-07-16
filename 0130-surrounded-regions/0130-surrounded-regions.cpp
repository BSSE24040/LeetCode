class Solution {
public:
 void dfs(vector<vector<char>>& grid, int i, int j)
    {
        int m = grid.size();
        int n = grid[0].size();

        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] != 'O')
        {
            return;
        }


        grid[i][j]='T';


        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }
    void solve(vector<vector<char>>& board) {
          int m = board.size();
        int n = board[0].size();

          for(int i = 0; i < m; i++)
        {
            dfs(board,i,0);
            dfs(board,i,n-1);
        }
 for(int j = 0; j < n; j++)
            {
                dfs(board,0,j);
            dfs(board,m-1,j);

            }

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {


                if(board[i][j]=='O')
                {
                    board[i][j]='X';
                }
                else if(board[i][j]=='T'){
                    board[i][j]='O';
                }
            }
        }


        
    }
};