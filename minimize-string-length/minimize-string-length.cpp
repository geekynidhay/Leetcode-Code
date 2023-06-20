class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> ch;
        for (auto i : s) ch.insert(i);
        return ch.size();
    }
};