class Solution {
public:
priority_queue<int> maxHeap;
    int lastStoneWeight(vector<int>& stones) {

           for(int i:stones){
            maxHeap.push(i);
           }


           while(maxHeap.size()>1){


            int a=maxHeap.top();
            maxHeap.pop();
             int b=maxHeap.top();
            maxHeap.pop();
    
    if(a!=b){
    
    maxHeap.push(a-b);
    }
    



           }
        if(maxHeap.empty()){
            return 0;
        }
        else{
            return maxHeap.top();
        }
    }
};