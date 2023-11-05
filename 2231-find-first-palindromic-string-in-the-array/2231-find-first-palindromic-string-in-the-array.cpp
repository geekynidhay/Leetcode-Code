class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++){
            string temp = words[i];
            string rev = temp;

            reverse(rev.begin(),rev.end());
            if (rev == temp) return temp;
        }
    return "";
    }
};