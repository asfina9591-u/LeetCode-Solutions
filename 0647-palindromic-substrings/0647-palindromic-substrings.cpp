// this question is smilar to the Longest Palindromic Substring this check what is the difference

class Solution {
public:
    int countSubstrings(string s) {
        int count=0;

        for(int i=0;i<s.length();i++){
            //odd lenth of the palindrome
            int left=i;
            int right=i;

            while(left>=0 && right<s.length() && s[left]==s[right]){
                left--;
                right++;
                count++;
            }
            //even length of the palindrome
            left=i;
            right=i+1;

            while(left>=0 && right<s.length() && s[left]==s[right]){
                left--;
                right++;
                count++;
           }
        }
        return count;
    }
};
        