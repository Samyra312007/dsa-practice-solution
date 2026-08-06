class Solution {
private:
    int product(int num){
        int temp = 1;
        while(num != 0){
            temp *= (num%10);
            num = num/10;
        }
        return temp;
    }
public:
    int smallestNumber(int n, int t) {
        int res = -1;
        for(int i = n; i<101; i++){
            int prd = product(i);
            if(prd%t == 0){
                res = i;
                break;
            }
        }
        return res;
    }
};