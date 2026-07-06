class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int maxLen = 0;   // Biggest answer found

        // Choose where the substring starts
        for (int i = 0; i < s.length(); i++) {

            unordered_set<char> st;   // Empty bag

            // Move forward one character at a time
            for (int j = i; j < s.length(); j++) {

                // Already seen this character?
                if (st.count(s[j])) {
                    break;    // Stop this substring
                }

                // Put character in the bag
                st.insert(s[j]);

                // Length of current substring
                int len = j - i + 1;

                // Save the biggest length
                maxLen = max(maxLen, len);
            }
        }

        return maxLen;
    }
};