#include <climits>
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
int max1 = INT_MIN;
int secMax = INT_MIN;
int thirMax = INT_MIN;

int min1 = INT_MAX;
int min2 = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max1){
                thirMax=secMax;
                secMax=max1;
                
                max1=nums[i];

            }
            else if(nums[i]>secMax){
                thirMax=secMax;
                secMax=nums[i];
            } else if(nums[i]>thirMax){
                thirMax=nums[i];
            }


            if(nums[i]<min1){
                min2=min1;
                min1=nums[i];
            }
            else if(nums[i]<min2){
                min2=nums[i];
            }
            
        }

        return max(max1*secMax*thirMax,min1*min2*max1);
        
    }
};