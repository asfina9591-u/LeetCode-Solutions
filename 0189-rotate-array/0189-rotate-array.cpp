class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;
        k %= n;                       
        if (k == 0) return;

        reverse(nums.begin(), nums.end());// reverse the entire one
        reverse(nums.begin(), nums.begin() + k);// reverse the first k elements
        reverse(nums.begin() + k, nums.end());// reverse the reamaing k elements
    }
};


// for the left arrays same but lil changes
void leftRotate(vector<int>& nums, int k) {
    int n = nums.size();

    k %= n;
    if(k == 0) return;

    reverse(nums.begin(), nums.begin() + k);// reverse the first k elements
    reverse(nums.begin() + k, nums.end());// then the remaining
    reverse(nums.begin(), nums.end());// reverse fully
}
