class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int a = 0, temp = 0;
    
    while (a < nums.size()){
        temp = nums[a] * nums[a];
        nums[a] = temp;
        temp = 0;
        a++;
    }

sort (nums.begin() ,nums.end());
return nums;
    }
};