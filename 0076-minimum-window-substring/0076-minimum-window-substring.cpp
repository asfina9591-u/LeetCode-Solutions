class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need;
        unordered_map<char, int> window;

        // Count characters required from t
        for (int i = 0; i < t.size(); i++) {
            need[t[i]]++;
        }

        int have = 0;
        int required = need.size();

        int left = 0;

        int minLength = INT_MAX;
        int start = 0;

        // Move right side of the window
        for (int right = 0; right < s.size(); right++) {

            window[s[right]]++;

            // If this character's required frequency is satisfied
            if (need.count(s[right]) &&
                window[s[right]] == need[s[right]]) {
                have++;
            }

            // Current window contains everything required
            while (have == required) {

                // Check whether current window is smaller
                if (right - left + 1 < minLength) {
                    minLength = right - left + 1;
                    start = left;
                }

                // Remove the left character
                window[s[left]]--;

                // If removing it makes the window invalid
                if (need.count(s[left]) &&
                    window[s[left]] < need[s[left]]) {
                    have--;
                }

                left++;
            }
        }

        // No valid window found
        if (minLength == INT_MAX) {
            return "";
        }

        return s.substr(start, minLength);
    }
};