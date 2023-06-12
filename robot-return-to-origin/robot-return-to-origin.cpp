class Solution {
public:
    bool judgeCircle(string moves) {
        
        int left = 0, right = 0, up = 0, down = 0;

    for (int i = 0; i < moves.size(); i++){
        if (moves[i] == 'U') up++;
        if (moves[i] == 'D') down++;
        if (moves[i] == 'L') left++;
        if (moves[i] == 'R') right++;
    }

    if ((left == right) && (up == down)) return true;
    return false;
    }
};