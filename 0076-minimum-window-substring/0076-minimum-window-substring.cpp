class Solution {
public:
    string minWindow(string s, string t) {

        int m = s.length();
        int n = t.length();

        if (n > m)
            return "";

        int freq[128] = {};

        for (char ch : t)
            freq[ch]++;

        int i = 0;
        int matched = 0;

        int minLength = INT_MAX;
        int start = 0;

        for (int j = 0; j < m; j++)
        {
            // Add s[j] to window
            if (freq[s[j]] > 0)
                matched++;

            freq[s[j]]--;

            // Try to shrink the window
            while (matched == n)
            {
                if (j - i + 1 < minLength)
                {
                    minLength = j - i + 1;
                    start = i;
                }

                freq[s[i]]++;

                if (freq[s[i]] > 0)
                    matched--;

                i++;
            }
        }

        if (minLength == INT_MAX)
            return "";

        return s.substr(start, minLength);
    }
};