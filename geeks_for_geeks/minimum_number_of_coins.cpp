class Solution {
  public:
    int findMin(int n) {
        int tens = n/10;
        n = n%10;
        int fives = n/5;
        n = n%5;
        int twos = n/2;
        n = n%2;
        int ones = n/1;
        return tens+fives+twos+ones;
    }
};