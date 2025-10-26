class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int summ = 0;
        int num = x;
        while(num != 0){
            summ += num%10;
            num = num/10;
        }
        int val = x % summ;
        return (val == 0) ? summ : -1;
    }
};