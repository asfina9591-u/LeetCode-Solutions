class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){     // If lengths are different, they can't be anagrams
           return false;
        }

        vector<int> freq(26,0);      // Frequency array for 26 lowercase letters

        for(int i=0;i<s.size();i++){         // Count characters in s
            freq[s[i]-'a']++;
        }

        for(int i=0;i<t.size();i++){        // Decrease count using t
            freq[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){        // If any frequency is not 0, they are not anagrams
            if(freq[i]!=0){
                return false;
            }
        }

        return true;        // All frequencies became 0
    }
};



       