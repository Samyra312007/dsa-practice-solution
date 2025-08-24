class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int seven = n*(n-1);
        int sodd = n*n;
        int gcd_value = gcd(seven, sodd);
        return gcd_value;
    }
};©leetcode