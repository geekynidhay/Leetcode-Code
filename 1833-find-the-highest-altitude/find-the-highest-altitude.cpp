class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector <int> v;
        v.push_back(0);
        int p1 = 0, p2 = 0;

        while (p1 < gain.size()){
            int ans = gain[p1++] + v[p2++];
            v.push_back(ans);
        }

        sort (v.begin(),v.end());
        int l = v.size()-1;

    return v[l];
    }
};