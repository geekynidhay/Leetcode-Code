class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int p = 0;
        if (words.size() != s.size())
            return false;
        for (int i = 0; i < words.size(); i++){
            if (p < s.size()){
            if (words[i][0] != s[p++]){
                return false;
            }
            }
        }
        return true;
    }
};