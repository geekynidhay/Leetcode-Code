class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort (ransomNote.begin() , ransomNote.end());
        sort (magazine.begin() , magazine.end());

        int i =0, j = 0, count = 0;

        while (j < magazine.size()){
            if (ransomNote[i] == magazine[j]){
                i++;
                j++;
                count++;}
            else {
                j++;
                }
        }

        if (count == ransomNote.length()) return true;

    return false;
    }
};