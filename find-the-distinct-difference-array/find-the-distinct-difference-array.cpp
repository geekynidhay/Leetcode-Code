class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>ans;
        map<int,int>left;
        map<int,int>right;
        for(int i=0;i<nums.size();i++){
            right[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            left[nums[i]]++;
            right[nums[i]]--;
            if(right[nums[i]]==0)right.erase(nums[i]);
            int temp=left.size()-right.size();
            ans.push_back(temp);
        }
        return ans;
    }
};