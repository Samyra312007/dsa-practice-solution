class Solution {
public:
    bool checka(int x){
        string as = to_string(x);
        bool found = false;
        for(int i = 0; i<as.length(); i++){
            if(as[i] == '0') found = true;
        }
        return found;
    }
    int nexta(int x){
        bool found = checka(x);
        while(found != false){
            if(x>INT_MAX) break;
            x++;
            found = checka(x);
        }
        return x;
    }
    bool checkb(int x){
        string bs = to_string(x);
        bool found = false;
        for(int i = 0; i<bs.length(); i++){
            if(bs[i] == '0') found = true;
        }
        return found;
    }
    int prevb(int x){
        bool found = checkb(x);
        while(found != false && x>=1){
            x--;
            found = checkb(x);
        }
        return x;
    }

    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        int a = 1;
        int b = n-1;
        bool founda = checka(a);
        bool foundb = checka(b);
        while(founda != false || foundb != false){
            nexta(a);
            prevb(b);
            founda = checka(++a);
            foundb = checkb(--b);
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};