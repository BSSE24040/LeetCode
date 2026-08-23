class Solution {
public:
 vector<string> result;

    vector<string>phone = {
        "", //0
        "",  //1
        "abc", //2
        "def", //3
        "ghi", //4
        "jkl", //5
        "mno", //6
        "pqrs",//7
        "tuv",//8
        "wxyz"//9
    }; 




void backtrack(string &digits,int start,string &current){


if(start==digits.size()){
    result.push_back(current);
    return;
}



    string letters=phone[digits[start]-'0'];

 for( char c:letters){
    current.push_back(c);

    backtrack(digits,start+1,current);

    current.pop_back();
 }





}
    vector<string> letterCombinations(string digits) {
         if (digits.empty())
            return {};

        string current;

        backtrack(digits,0,current);
          return result;
    }
};