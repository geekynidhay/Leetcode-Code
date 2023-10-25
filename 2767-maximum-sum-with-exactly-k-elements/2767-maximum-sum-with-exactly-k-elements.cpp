class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort (nums.begin(), nums.end());
        int ans = 0;
        int p = nums.size()-1;
        while (k > 0){
            int temp = nums[p]+ans;
            ans = temp;
            nums[p] = nums[p]+1;
            k--;
        }
        return ans;
    }
};