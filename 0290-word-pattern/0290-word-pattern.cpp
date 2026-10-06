class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_set<string> used;
        unordered_map<char, string> mp;

        stringstream ss(s);
        string word;

        for(int i=0;i<pattern.size();i++){
            if(!(ss>>word)){
                return false;
            }

            char ch=pattern[i];
            if(mp.find(ch)!=mp.end()){
                if(mp[ch]!=word){
                    return false;
                }
            }
            else
            {
                if(used.find(word)!=used.end()){
                    return false;
                }
                mp[ch]=word;
                used.insert(word);
            }
        }

        if(ss>>word){
            return false;
        }
        return true;
    }
};