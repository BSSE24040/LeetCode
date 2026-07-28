class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans;
         vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);

        for(auto i: prerequisites){
           
            int course=i[0];
            int preq=i[1];
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

        ans.push_back(course);
        for(auto nei:adj[course]){
           
           indegree[nei]--;


           if(indegree[nei]==0){
            q.push(nei);
           }

        }
         


        }

if(ans.size()==numCourses)
{
return ans;
}
else{
    return {};
}
    }
};