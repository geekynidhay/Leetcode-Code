class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector <int> v1;
        int ans = -1;
    for (int i = 0; i <nums.size(); i++){
        v1.push_back(nums[i]);
    }
    int sss = v1.size();
    sort (v1.begin(), v1.end());
    int lofv = sss-1;

    if (v1[lofv] >= 2*(v1[lofv-1])){
      for (int i = 0; i < nums.size(); i++){
          if (nums[i] == v1[lofv]){
              ans = i;
              return i;
          }
      }
    }
return ans;
    }
};