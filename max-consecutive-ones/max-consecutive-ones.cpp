class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt;
        vector <int> ans;
        int m = nums.size();
        int maxi = 0;
        for (int i  = 0; i<nums.size(); i++){
            if (nums[i] == 1){
                cnt++;
                maxi = max(cnt,maxi);

            }
            else {
              
                cnt = 0;
            }
        }
        
        return maxi;
    }
};