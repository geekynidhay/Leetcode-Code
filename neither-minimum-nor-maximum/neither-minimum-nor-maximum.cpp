class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
    
    sort (nums.begin() ,nums.end());
        if (nums.size() == 1) return -1;
        if (nums.size() == 2) return -1;

        int s = nums[1];
            
           
       
        return s;
    }
};