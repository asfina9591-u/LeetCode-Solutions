class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";

        for (int i = 0; i < strs[0].size(); i++) { // str[0] for to store the flower index
            char current = strs[0][i];

            for (int j = 1; j < strs.size(); j++) { // if we want to store all the str like ["flower","flow","flight"] this we are using str.size

                if (i >= strs[j].size() || strs[j][i] != current) { 
                    return prefix;
                }
            }

            prefix += current;
        }

        return prefix;
    }
};