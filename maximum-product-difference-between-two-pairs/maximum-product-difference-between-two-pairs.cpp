class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
     sort (nums.begin(),nums.end());
     int first = 0;
     int last = nums.size() - 1;
     int ans1 = 1, ans2 = 1;
     int sol = 0;

        ans1 = (nums[first]*nums[first+1]);
        ans2 = (nums[last]*nums[last-1]);
        sol = abs(ans2-ans1);

    return sol;
    }
};