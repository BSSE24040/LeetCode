class Solution {
public:
    vector<vector<int>> result;

  void backtrack(int index, vector<int>& current, vector<int>& nums){

        
    result.push_back(current);

    for(int i=index;i<nums.size();i++){

        current.push_back(nums[i]);

        backtrack(i+1,current,nums);

        current.pop_back();
    }

  }
  

    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>current;
       backtrack(0,current,nums);
       return result;
    }
};