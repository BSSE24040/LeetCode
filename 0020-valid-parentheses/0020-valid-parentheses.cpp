class Solution {
public:

bool isMatching(char s,char t){
           return (s=='(' &&t == ')') ||
               (s== '{' && t== '}') ||
               (s == '[' && t == ']');

}
    bool isValid(string s) {
        stack<char> st;
        bool flag=false;

        for(char a:s){

            if(a=='('||a=='{'||a=='['){
                st.push(a);
            }
       else{
        if(st.empty())
        {
            return false;
        }
        char top =st.top();
        st.pop();
        if(!isMatching(top,a)){
      return false;
        }
            
}
        }
        return st.empty();
        
    }
};