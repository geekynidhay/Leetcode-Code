class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
    //     long long int dist = 0;
    

    // while(mainTank > 0){
    //         if (mainTank < 5){
    //             dist = dist + (mainTank*10);
    //             break;
    //         }
    //         else if (mainTank >= 5){
    //             dist = dist +10;
    //             mainTank--;
    //                 if (additionalTank > 0){
    //                     dist = dist+10;
    //                     additionalTank--;
                       
    //                 }
    //         }
    // }
    // return dist;

    long long int use = 0, ans = 0;

    while(mainTank > 0){
        use++;
        if (use%5 == 0 && additionalTank > 0){
            additionalTank--;
            mainTank++;
        }
        ans += 10;
        mainTank--;
    }
    return ans;
    }
};