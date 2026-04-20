class Solution {
  public:
    int val(int n){
        if(n == 1) return 0;
        if(n == 2) return 1;
        return (n-1)*(val(n-1) + val(n-2));
    }
    int derangeCount(int n) {
        return val(n);
    }
};