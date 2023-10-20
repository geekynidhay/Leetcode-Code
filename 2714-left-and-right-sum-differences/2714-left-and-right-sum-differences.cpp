class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector <int> left;
        vector <int> right;
        vector <int> ans;
        left.push_back(0);
        right.push_back(0);
        int temp = 0;
        int i = 0;

        while (left.size()-1 != nums.size()-1){
            temp += nums[i];
            left.push_back(temp);
            i++;
        }

        temp = 0;
        while (right.size()-1 != nums.size()-1){
            temp += nums[i];
            right.push_back(temp);
            i--;
        }
        reverse(right.begin(), right.end());

        for (int i = 0; i < nums.size(); i++){
            temp = abs(right[i] - left[i]);
            ans.push_back(temp);
        }
        
        return ans;
    }
};