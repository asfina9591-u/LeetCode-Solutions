class Solution {
public:
    string toGoatLatin(string sentence) {

        string ans = "";
        int count = 1;
        int i = 0;

        while (i < sentence.size()) {

            // Extract one word
            string word = "";

            while (i < sentence.size() && sentence[i] != ' ') {
                word += sentence[i];
                i++;
            }

            // Check if first letter is a vowel
            char ch = word[0];

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {

                word += "ma";
            }
            else {
                word.erase(0, 1);   // Remove first letter
                word += ch;         // Add it at the end
                word += "ma";
            }

            // Add 'a' count times
            for (int j = 0; j < count; j++) {
                word += 'a';
            }

            ans += word;

            // Add space if more words are left
            if (i < sentence.size()) {
                ans += ' ';
                i++;    // Skip the space
            }

            count++;
        }

        return ans;
    }
};