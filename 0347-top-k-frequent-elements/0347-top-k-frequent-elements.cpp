class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Step 1: Count frequency
        unordered_map<int, int> mp;

        for(int num : nums) {
            mp[num]++;
        }

        // Step 2: Bucket
        vector<vector<int>> bucket(nums.size() + 1);

        for(auto it : mp) {
            bucket[it.second].push_back(it.first);
        }

        // Step 3: Highest frequency se start
        vector<int> answer;

        for(int freq = nums.size(); freq >= 1; freq--) {

            for(int num : bucket[freq]) {
                answer.push_back(num);

                if(answer.size() == k) {
                    return answer;
                }
            }
        }

        return answer;
    }
};