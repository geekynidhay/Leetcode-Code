class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
       unordered_map < int,int > mp;
    for (int i=0; i<nums.size(); i++){
        mp[nums[i]]++;
    }
    int i;
        for (i=0; i<nums.size(); i++){
            if (mp[nums[i]] == 1){break;}
             }
return nums[i];

    }
};