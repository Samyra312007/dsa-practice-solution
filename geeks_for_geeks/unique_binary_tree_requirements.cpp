// User function Template for C++

class Solution {
  public:
    bool isPossible(int a, int b) {
        if(a == 1 && b == 3 || a == 3 && b == 1 || a == b) return false;
        return true;
    }
};