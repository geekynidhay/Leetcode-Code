class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.size();
        int cnt = 0, temp = 0;

        if (n == 1){
            for (int i = 0; i < words.size(); i++){
                if (words[i][0] == pref[0]) cnt++;
            }
        }

        else {
        for (int i = 0; i < words.size(); i++){
            if (words[i][0] == pref[0]){
                for (int j = 0; j < n; j++){
                    if (words[i][j] == pref[j]) temp++;
                    else break;
                    if (temp == (n)) cnt++;
                }
            temp = 0;
            }
        }
        }    
        return cnt;
    }
};