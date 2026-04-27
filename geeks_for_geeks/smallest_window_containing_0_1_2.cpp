class Solution {
  private: 
    int maxfunc(int a, int b, int c){
        if(a >= b && a >= c) return a;
        else if(b > a && b >= c) return b;
        else if(c > a && c > b) return c;
        return -1;
    }
    int minfunc(int a, int b, int c){
        if(a <= c && a <= b) return a;
        else if(b < a && b <= c) return b;
        else if(c < a && c < b) return c;
        return -1;
    }
  public:
    int smallestSubstring(string s) {
        int n = s.length();
        int zero = -1;
        int one = -1;
        int two = -1;
        int minlength = INT_MAX;
        for(int i = 0; i<n; i++){
            if(s[i] == '0'){
                zero = i;
            }
            else if(s[i] == '1'){
                one = i;
            }
            else if(s[i] == '2'){
                two = i;
            }
            if(zero != -1 && one != -1 && two != -1){
                int mini = minfunc(zero, one, two);
                int maxi = maxfunc(zero, one, two);
                if(minlength == -1) minlength = maxi - mini;
                else minlength = min(maxi - mini, minlength);
            }
        }
        if(minlength == INT_MAX) return -1;
        return minlength + 1;
    }
};
