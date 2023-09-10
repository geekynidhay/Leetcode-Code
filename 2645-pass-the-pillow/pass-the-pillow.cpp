class Solution {
public:
    int passThePillow(int n, int time) {
        int person = 1;
        bool flag = 1;

        while (time != 0){
            if (person == 1 || person == n) flag = !flag;
        
        if (flag == 0 && person != n){
            person += 1;
        }
        else if (flag == 1 && person != 1){
            person -= 1;
        }
        time--;
        }
    return person;
    }
};