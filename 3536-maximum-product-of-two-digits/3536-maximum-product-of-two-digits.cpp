class Solution {
public:
    int maxProduct(int n) {



int max=0;
int secMax=0;

while(n>0){
        int a=n%10;
         n/=10;
         if(a>max){
            secMax=max;
            max=a;
         }

else if(a>secMax){
    secMax=a;
}
         }         return max*secMax;
        
    }
};