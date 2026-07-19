class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
int count=nums.size();

        for(int i=0;i<count;i++){
            if(nums[i]==val){
                for(int j=i;j<count-1;j++){
                    nums[j]=nums[j+1];
                }
               count--;
               i--;
            }
        }
        return count;
        
    }
};