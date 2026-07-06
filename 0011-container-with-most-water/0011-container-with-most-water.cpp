class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int l=0;
        int r=height.size()-1;
int maxHeight=-1;

        while(l<r){

           int minHeight=min(height[l],height[r]);
           if(maxHeight<minHeight*(r-l)){
            maxHeight=minHeight*(r-l);
           }
if(height[l]<height[r]){
    l++;
}
else{
    r--;
}

        }
       return maxHeight;
    }
};