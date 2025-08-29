class Solution {
public:
    int nextnum(int n){
        int out = 0;
        while(n>0){
            int rem = n%10;
            out += rem*rem;
            n = n/10;
        }
        return out;
    }
    bool isHappy(int n) {
        unordered_set<int> visit;
        while(visit.find(n) == visit.end()){
            visit.insert(n);
            n = nextnum(n);
            if(n == 1) return true;
        }
        return false;
    }
};