class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> mp;

        for(char ch : s) {
            mp[ch]++;
        }

        vector<string> bucket(s.size() + 1);

        for(auto it : mp) {
            bucket[it.second].append(it.second, it.first);
        }

        string answer = "";

        for(int freq = s.size(); freq >= 1; freq--) {
            answer += bucket[freq];
        }

        return answer;
    }
};