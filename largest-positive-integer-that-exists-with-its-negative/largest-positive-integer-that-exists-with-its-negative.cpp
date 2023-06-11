class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort (nums.begin() , nums.end());

        int max = nums.size() - 1;
        int min = 0;

        while (min < max){
            if (nums[max] == -nums[min]){
                return nums[max];
            }
            else if (-nums[min] > nums[max]){
                ++min;
            }
            else {
                --max;
            }
        }

        return -1;
    }
};