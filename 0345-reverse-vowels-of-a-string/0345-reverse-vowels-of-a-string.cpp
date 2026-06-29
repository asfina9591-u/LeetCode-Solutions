class Solution {
public:
    string reverseVowels(string s) {

        string vowels = "aeiouAEIOU";
        int left = 0;
        int right = s.size() - 1;
        int reverse=0;

        while (left < right) {

            // Move left pointer until it finds a vowel
            if (vowels.find(s[left]) == string::npos) {
                left++;
            }

            // Move right pointer until it finds a vowel
            else if (vowels.find(s[right]) == string::npos) {
                right--;
            }

            // Both are vowels
            else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};