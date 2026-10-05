class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       
       unordered_set<int> s;
       vector<int> ans;

      // store num1 elements
       for(int num: nums1){
        s.insert(num);
       }

       // store num2 elements
       for(int num: nums2){
        if(s.find(num)!=s.end()){
            ans.push_back(num);
            s.erase(num);
        }
       }
       return ans;
    }
};
