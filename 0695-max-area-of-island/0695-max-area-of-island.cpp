class Solution {
public:

   void dfs(vector<vector<int>>& grid,int i,int j,int&count){
 
 int m=grid.size();
        int n=grid[0].size();

if(j<0||i<0||i>=m||j>=n||grid[i][j]==0){
    return;
}
grid[i][j]=0;
count++;
   dfs(grid,i+1,j,count);
 dfs(grid,i-1,j,count);
 dfs(grid,i,j+1,count);
    dfs(grid,i,j-1,count);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size();
int maxNum=0;
 int count;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                 count=0;
                if(grid[i][j]==1){
                    dfs(grid,i,j,count);
                    if(count>maxNum){
                        maxNum=count;
                    }
                }
            }
        }
        return maxNum;
    }
};