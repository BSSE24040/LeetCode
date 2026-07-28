class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

         vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);

        for(auto i: prerequisites){
            
            int course=i[1];
            int preq=i[0];
            adj[preq].push_back(course);
            indegree[course]++;
        }



                queue<int> q;


for(int i=0;i<indegree.size();i++){
       if(indegree[i]==0){
        q.push(i);
       }
}
        int completed=0;

        while(!q.empty()){

int course=q.front();
q.pop();

        completed++;
        for(auto nei:adj[course]){
           
           indegree[nei]--;


           if(indegree[nei]==0){
            q.push(nei);
           }

        }
         


        }

return completed==numCourses;


    }
};