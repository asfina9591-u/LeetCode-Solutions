class Solution {
public:
    int firstUniqChar(string s) {
       
       int count[26]={0};
       
       //step1: count every chacter
       for(char c:s){
        count[c-'a']++;
       }

       //step2: find the first character occurring once
       for(int i=0;i<s.length();i++){
        if(count[s[i]-'a']==1)
        return i;
       }
       return -1;
    }
};