class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        int start = 0, end = n-1;
        long long int ans = 0;

        sort (skill.begin(),skill.end());

        while (start < end){
            if ((skill[start]+skill[end]) != (skill[start+1]+skill[end-1]))
            return -1;

            ans += (skill[start]*skill[end]);
            start++;
            end--;
        }
        return ans;
    }
};