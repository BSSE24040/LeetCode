class Solution {
public:
    int lengthOfLongestSubstring(string s) {

      

       unordered_set<char> st;
        int l=0,r=0;
        int maxLen=0;

        while (r<s.size()) {

        
            while (st.find(s[r])!=st.end()) {
                st.erase(s[l]);
                l++;
            }

           
            st.insert(s[r]);

            
            maxLen=max(maxLen,r-l+1);

            r++;
        }

        return maxLen;
    }

      
};