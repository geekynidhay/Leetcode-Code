class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es = 0;
        int ds = 0;
        for (int i = 0; i < nums.size(); i++){
            es += nums[i];
        int n = nums[i];

        if (n > 9){
            while (n > 0){
                ds += n%10;
                n /= 10;
            }
        }
        else ds += nums[i];
        
        }
        return abs(es - ds);
    }
};