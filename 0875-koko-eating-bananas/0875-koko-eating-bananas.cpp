class Solution {
public:

 long long getHours(vector<int>& piles,int k){
        long long hours=0;

    for(auto pile:piles){
        hours+=(pile+k-1)/k;  

    }

    return hours;
}


    int minEatingSpeed(vector<int>& piles, int h) {
        

      int low=1;
        int high=*max_element(piles.begin(), piles.end());
    int ans=high;

    while(low<=high){


   int mid= low+(high-low)/2;
    if(getHours(piles,mid)<=h){
        ans=mid;
        high=mid-1;
    }
else{
    low=mid+1;
}



    }
    return ans;






    }
};