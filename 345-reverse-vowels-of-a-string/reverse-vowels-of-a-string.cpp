class Solution {
public:
 bool vowel(char c){
        if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' 
        or c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
        return false;
    }
    string reverseVowels(string s) {
   
       int start = 0,end = s.length()-1;

       while (start < end){
           while (start < end && !vowel(s[start])) start++;
           while (start < end && !vowel(s[end])) end--;
           if (vowel(s[start]) && vowel(s[end])){
               swap (s[start],s[end]);
               start++;
               end--;
           }

       }
    return s;
    }
};