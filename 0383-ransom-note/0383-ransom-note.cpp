class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int freq[26] = {0};

        // Count frequency of each character in magazine
        for (int i = 0; i < magazine.length(); i++) {
            freq[magazine[i] - 'a']++;
        }

        // Use characters for ransomNote
        for (int i = 0; i < ransomNote.length(); i++) {
            freq[ransomNote[i] - 'a']--;

            // If frequency becomes negative,
            // magazine doesn't have enough of this character
            if (freq[ransomNote[i] - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};