class Solution {
public:

 vector<vector<int>> result;
void backtrack(int start,vector<int>&current,vector<int>& candidates,int target){

 if(target==0){
    result.push_back(current);
    return;
 }

 if(target<0){
    return;
 }
  
  for(int i=start;i<candidates.size();i++){


      current.push_back(candidates[i]);

    backtrack(i,current,candidates,target-candidates[i]);


    current.pop_back();
  }






}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        

        vector<int>current;

        backtrack(0,current,candidates,target);
        return result;
    }
};