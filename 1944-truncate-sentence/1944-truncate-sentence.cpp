class Solution {
public:
    string truncateSentence(string s, int k) {
        string st;
        int j = 0, cnt = 0;
        for (int i = 0; i < k; i++){
            while ( j != s.size()){
                if (s[j] == ' '){
                    j++;
                    st += ' ';
                    cnt++;
                    break;
                }
                else {
                    st += s[j++];
                }
            }
            }
        if (cnt+1 != k){
        st.erase(j-1);}
        return st;
        }
};