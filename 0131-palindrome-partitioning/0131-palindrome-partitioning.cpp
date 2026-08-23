class Solution {
public:
vector<vector<string>>result;
vector<string>current;
bool palindrome(string&s,int left,int right){


    while(left<right){

        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }

    return true;
}

  void backtrack(string &s,int start){
           
           if(start==s.size()){
            result.push_back(current);
           }

           for(int i=start;i<s.length();i++){


            if(palindrome(s,start,i)){

          current.push_back(s.substr(start,i-start+1));

        backtrack(s,i+1);
 
          current.pop_back();
            }
           }
  }
    vector<vector<string>> partition(string s) {
        
         backtrack(s,0);
         return result;

    }
};