class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int count=1;         // how many times is the current number appearing?
        int maxcount=1;      // Stores the highest count
        int answer=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
            count=1;
        }

        if(count>maxcount){
            maxcount=count;
            answer=nums[i];
        }
    }
        return answer;
    }
};