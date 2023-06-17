class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort (nums.begin() , nums.end());

        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 0;
        if (nums.size() == 2) return 0;
        
        int i = nums.size();
        long long int ans = 1;
        long long int ans2 = 1;

        ans = nums[i-1]*nums[i-2]*nums[i-3];
        ans2 = nums[0]*nums[1]*nums[i-1];
        // ans2 = ans;

    return max(ans,ans2);
    }
};