class Solution {
public:
priority_queue<int, vector<int>, greater<int>> pq;
    int findKthLargest(vector<int>& nums, int k) {
        
        for(auto i:nums){
            pq.push(i);

            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};