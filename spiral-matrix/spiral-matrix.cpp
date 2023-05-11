class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        vector <int> ans;

        int firstrow = 0;
        int firstcol = 0;
        int lastrow = row -1;
        int lastcol = col - 1;
        int count = row*col;
        int digit = 0;

        while ( digit < count ){
            for(int i = firstcol; digit < count && i <= lastcol ; i++){
                ans.push_back(matrix[firstrow][i]);
                digit++;
            }
                firstrow ++;

            for (int i = firstrow; digit < count && i <= lastrow; i++){
                ans.push_back(matrix[i][lastcol]);
                digit++;
            }
                lastcol--;

            for (int i = lastcol; digit < count && i >= firstcol; i--){
                ans.push_back(matrix[lastrow][i]);
                digit++;
            }
                lastrow--;

            for (int i = lastrow; digit < count && i >= firstrow; i--){
                ans.push_back(matrix[i][firstcol]);
                digit++;
            }
            firstcol++;
        }

        return ans;
    }
};