class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int len = 1; len <= n / 2; len++) {

            // len must divide the total length
            if (n % len != 0)
                continue;

            // Take the first substring
            string sub = s.substr(0, len);

            // Build a new string
            string newString = "";

            for (int i = 0; i < n / len; i++) {
                newString += sub;
            }

            // Compare
            if (newString == s)
                return true;
        }

        return false;
    }
};