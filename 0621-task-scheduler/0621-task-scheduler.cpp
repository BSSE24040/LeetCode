class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        vector<int>freq(26,0);

        for(char i:tasks){
            freq[i-'A']++;
        }

        priority_queue<int> pq;


        for(int i :freq){
            if(i>0){
                pq.push(i);
            }}

int time=0;
            while(!pq.empty()){

          
          vector<int>temp;
      int cycle=n+1;
          while(cycle>0&&!pq.empty()){


           int top=pq.top();
        pq.pop();


        top--;

        if(top>0){
            temp.push_back(top);
        }


        time++;
        cycle--;
          }

          for(int i:temp){
            pq.push(i);
          }

          if(!pq.empty()){
            time+=cycle;
          }

            }

        
        return time;
    }
    
};