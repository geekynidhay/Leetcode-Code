class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int start = 0;
        int end = nums.size()-1;

    while (start < end){
        string p = to_string(nums[start]);
        string q = to_string(nums[end]);
        string r = p+q;
        ans += stoi(r);
        start++;
        end--;
    }

    if (start == end){
        ans += nums[end];
    }
    return ans;
    }
};