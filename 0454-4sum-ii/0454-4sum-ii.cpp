class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2,
                     vector<int>& nums3, vector<int>& nums4) {

        unordered_map<int, int> mp;

        // Step 1: Store sums of nums1 and nums2
        for(int a : nums1) {
            for(int b : nums2) {
                mp[a + b]++;
            }
        }

        int count = 0;

        // Step 2: Find matching sums from nums3 and nums4
        for(int c : nums3) {
            for(int d : nums4) {
                int need = -(c + d);

                if(mp.find(need) != mp.end()) {
                    count += mp[need];
                }
            }
        }

        return count;
    }
};