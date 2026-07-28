class Solution {
public:


    int orangesRotting(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size();
 queue<pair<int,int>>q;
        int fresh=0;
int count=0;
    
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                if (grid[i][j]==2)
                    q.push({i, j});
                else if (grid[i][j]==1)
                    fresh++;
            }
        }

        if(fresh==0){
            return 0;
        }
vector<pair<int, int>> directions = {
            {1, 0}, {-1, 0}, {0, 1}, {0, -1}
        };
        while(!q.empty()){

            int size=q.size();

bool flag=false;
            while(size--){
             auto [x,y]=q.front();
q.pop();


         for(auto &dir: directions){
              
              int nx= x+dir.first;
              int yx=y+dir.second;


              if(nx>=0&&nx<m&&yx<n&&yx>=0&&grid[nx][yx]==1){
grid[nx][yx]=2;
flag=true;

fresh--;
q.push({nx,yx});
              }

             
         }

            }
             if(flag){
                count++;
              }
        }

     
      
 return (fresh==0)?count:-1;

    }

};