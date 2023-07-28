class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map <int,int> ans;
       int n = nums.size();
       for (int i = 0; i < n; i++){
           ans[nums[i]]++;
       }
       n = n/2;
       for (auto k : ans){
           if (k.second > n){
               return k.first;
           }
       }
        return 0;
    }
};
