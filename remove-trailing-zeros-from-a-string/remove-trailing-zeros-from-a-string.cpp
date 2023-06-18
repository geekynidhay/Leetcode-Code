class Solution {
public:
    string removeTrailingZeros(string num) {
        int p = num.size() - 1;
        int a = 0;

       while ( p >= 0 && num[p] == '0'){
           num.pop_back();
           p--;
       }
       return num;
    }
};