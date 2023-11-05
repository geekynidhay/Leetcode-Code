class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for(auto it : words){
            string rvs =it;
            reverse(rvs.begin(),rvs.end());
            if(rvs==it) return it;
        }

        return "";
        
    }
};