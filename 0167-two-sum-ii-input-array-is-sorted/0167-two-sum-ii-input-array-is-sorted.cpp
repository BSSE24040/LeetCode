class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> num;


        int l=0;
        int r=numbers.size()-1;
        while(l<r){
            int sum=numbers[l]+numbers[r];
 if(sum==target){
        num.push_back(l+1);
        num.push_back(r+1);
        return num;
        }
        else if(sum<target){
        l++;
        }
        else{
            r--;
        }}
        return num;
        }

};