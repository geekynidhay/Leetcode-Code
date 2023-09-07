class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // sort (arr.begin(),arr.end());

        // int i = 0;
        // int j = i+1;

        // while (i < arr.size()){
        //     int temp = arr[i]*2;
        //         while (j < arr.size()){
        //              if (arr[j] == temp) return true;
        //              else if (arr[j] > temp) break;
        //              else j++;
        //         }
        //     i++;
        // }
        // return false;

        for (int i = 0; i < arr.size(); i++){
            for (int j = i+1; j < arr.size(); j++){
                if (arr[i] == (arr[j]*2) || arr[j] == (arr[i]*2)) return true;
            }
        }
    return false;
    }
};