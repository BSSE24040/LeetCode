class Solution {
public:
    bool isPalindrome(int x) {

if(x<0){return false;}
int orig=x;
long long rev=0;
        while(x>0){
            int a=x%10;
            x/=10;
            rev=rev*10+a;
        }
  return orig==rev;

        
    }
};