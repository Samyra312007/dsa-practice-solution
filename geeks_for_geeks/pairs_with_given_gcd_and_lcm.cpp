class Solution {
  public:
    int pairCount(int x, int y) {
        if(x > y) return 0;
        int count = 0;
        for(int i = x; i<=y; i++){
            int a = i;
            int b = (x*y)/a;
            if(gcd(a,b) == x && lcm(a,b) == y) count++;
        }
        return count;
    }
};