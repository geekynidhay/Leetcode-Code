class Solution {
public:
static bool cmp (pair<string,int>a,pair<string,int>b){
            return a.second > b.second;
        }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector <pair<string,int>> ans;
        vector <string> aa;
        for (int i = 0; i < heights.size(); i++){
            ans.push_back({names[i],heights[i]});
        }

        sort (ans.begin(),ans.end(),cmp);
        for (int i = 0; i < names.size(); i++){
            aa.push_back(ans[i].first);
        }
    
    return aa;
         
    }
};