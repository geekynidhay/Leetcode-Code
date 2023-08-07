class Solution {
public:
    string finalString(string s) {
    
        string st;
        for (char j : s){
            if(j == 'i') reverse(st.begin(), st.end());
        else st += j;
         }

    return st;
   
    }
};