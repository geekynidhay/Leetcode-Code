class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
       set <int> final;

       for (auto it : jewels){
           final.insert(it);
       }
            int count = 0;
       for (auto it : stones){
           if (final.count(it)){
               count ++;
           }
       }
       return count;
    }
};