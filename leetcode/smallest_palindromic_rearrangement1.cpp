class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        string res(n, ' ');
        map<int, int> mpp;
        for(int i = 0; i<n; i++){
            mpp[s[i] - 'a']++;
        }
        int i = 0;
        int j = n-1;
        char mid = ' ';
        for(auto& num: mpp){
            int character = num.first;
            int freq = num.second;
            int pairs = freq/2;
            for(int k = 0; k<pairs; k++){
                res[i++] = character+'a';
                res[j--] = character+'a';
            }
            if(freq%2 == 1){
                mid = character + 'a';
            }
        }
        if(n%2 == 1){
            res[i] = mid;
        }
        return res;
    }
};