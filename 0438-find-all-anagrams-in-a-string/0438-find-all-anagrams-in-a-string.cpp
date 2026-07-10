class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        // If p is longer than s, no anagrams are possible
        if (p.size() > s.size())
            return ans;

        vector<int> freqP(26, 0);
        vector<int> freqS(26, 0);

        // Frequency of p and first window of s
        for (int i = 0; i < p.size(); i++) {
            freqP[p[i] - 'a']++;
            freqS[s[i] - 'a']++;
        }

        // Check first window
        if (freqP == freqS)
            ans.push_back(0);

        // Slide the window
        for (int i = p.size(); i < s.size(); i++) {

            // Add new character
            freqS[s[i] - 'a']++;

            // Remove old character
            freqS[s[i - p.size()] - 'a']--;

            // Compare frequencies
            if (freqP == freqS)
                ans.push_back(i - p.size() + 1);
        }

        return ans;
    }
};