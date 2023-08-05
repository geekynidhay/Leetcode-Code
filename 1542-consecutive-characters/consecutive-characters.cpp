class Solution {
public:
    int maxPower(string s) {
        int cnt = 0;
        int a = 0;
        
        for (int i = 0; i < s.size(); i++){
            if (s[i] == s[i+1]){
                a++;
            }
            else {
                cnt = max(cnt,a);
                a = 0;
            }
        }
        
return cnt+1;
    }
    
};