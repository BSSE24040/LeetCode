class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int a=haystack.length();

    int b=needle.length();


    for(int i=0;i<a;i++){
 
 int j=0;
        while(j<b&&haystack[i+j]==needle[j]){
            j++;
        }


        if(j==b){
            return i;
        }

    }
    return -1;
        
    }
};