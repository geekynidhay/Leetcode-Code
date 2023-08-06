class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        set <double> store;
        int first = 0, last = nums.size()-1;
        
        while (first <= last){
            double ans = (nums[first]+nums[last]) / 2.00;
            store.insert(ans);
            first++;
            last--;
        }

        return store.size();

    }
};