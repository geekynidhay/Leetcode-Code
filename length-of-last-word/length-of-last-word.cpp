class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = s.size(), ans = 0;

        for (int i = last - 1;  i >= 0 ; --i){
            if (s[i] == ' ' && ans > 0) return ans;
            if (s[i] != ' ')ans++;
        }  
        return ans;      
    }
};