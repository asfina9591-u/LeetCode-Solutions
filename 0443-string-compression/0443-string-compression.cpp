class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int idx = 0;

        for (int i = 0; i < n; i++) {

            char ch = chars[i];
            int count = 0;

            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }

            // Write the character
            chars[idx++] = ch;

            // Write count if greater than 1
            if (count > 1) {
                string str = to_string(count);

                for (char dig : str) {
                    chars[idx++] = dig;
                }
            }

            // Because while already moved i to the next group,
            // for-loop will do i++ once more.
            i--;
        }

        return idx;
    }
};