class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        int i = 0;
        int j = n-1;
        while(i<j){
            if(tolower(s[i]) != 'a' && tolower(s[i]) != 'e' && tolower(s[i]) != 'o' && tolower(s[i]) != 'u' && tolower(s[i]) != 'i') i++;
            else if(tolower(s[j]) != 'a' && tolower(s[j]) != 'e' && tolower(s[j]) != 'o' && tolower(s[j]) != 'u' && tolower(s[j]) != 'i') j--;
            else{
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};