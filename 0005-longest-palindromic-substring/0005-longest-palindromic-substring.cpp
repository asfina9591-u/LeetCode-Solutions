class Solution {
public:
    string longestPalindrome(string s) {
        int start=0;
        int maxLen=1;

        for(int i=0;i<s.length();i++){
            //odd length of the palindrome
            int left=i;
            int right=i;
            while(left>=0 && right<s.length() && s[left]==s[right]){
                if(right-left+1>maxLen){
                    maxLen=right-left+1;
                    start=left;
                }
                left--;
                right++;
            }
            //even length of the palindrome here in the even abs right=i+1 then everything is same as odd
            left=i;
            right=i+1;
            while(left>=0 && right<s.length() && s[left]==s[right]){
                if(right-left+1>maxLen){
                    maxLen=right-left+1;
                    start=left;
                }
                left--;
                right++;
            }
        }
        return s.substr(start,maxLen);
    }
};