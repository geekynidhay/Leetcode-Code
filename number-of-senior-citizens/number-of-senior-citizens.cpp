class Solution {
public:
    int countSeniors(vector<string>& details) {
     vector <int> arr;
     int ans = 0;
        
    for (auto i : details){
        int t = (i [11]- '0')*10 + (i[12]- '0');
            if ( t > 60) ans++;
    }
        return ans;
    }
};