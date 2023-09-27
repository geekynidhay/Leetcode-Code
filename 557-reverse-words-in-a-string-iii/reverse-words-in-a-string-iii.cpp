class Solution {
public:
    string reverseWords(string s) {
    //     vector <string> ans;
    //     vector <string> temp;

    // for (int i = 0; i < s.length(); i++){
    //     if (s[i] != ' '&& s[i+1] == ' '){
    //         temp.push_back(s[i]); 
    //         revrse(temp.begin(),temp.end());
    //         ans.push_back(temp);
    //         temp.clear();      
    //     }
    //     else if (s[i] != ' '){
    //         temp.push_back(s[i]);        
    //     }
    //     else if (s[i] == ' '){
    //         ans.push_back(' ');
    //     }
        
    //     return ans;

    string result,word;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                word+=s[i];
            }else{
                reverse(word.begin(),word.end());
                result+=(word);
                result+=" ";
                word.clear();
            }
        }
         reverse(word.begin(),word.end());
        result+=word;
        return result;
    }
};