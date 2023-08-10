class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end){
            int mid = start + (end - start)/2;
                if(nums[mid] == target || nums[start] == target || nums[end] == target){
                    return true;
                }
                else if (nums[mid] < target){
                    end--;
                }
                else if(nums[mid] > target){
                    start++;
                    end--;
                }
                
        }
        return false;
    }
};