class Solution {
public:
    bool checkInclusion(string s1, string s2) {

       unordered_map<char,int> map;
bool flag;
int count=0;
for(int i=0;i<s1.length();i++){
    map[s1[i]]++;
    count++;
}
int i=0;
int l=0;
 
while(i<s2.length()){
 
if(i-l+1==count){

unordered_map<char,int> maps=map;


for(int r=l;r<=i;r++){
    maps[s2[r]]--;
}
 flag=true;
for(auto x : maps){
    if(x.second != 0){
        flag = false;
        break;
    }
}
if(flag){
    return true;
}

                l++;
   
}

i++;
}

return flag;








        
    }
};