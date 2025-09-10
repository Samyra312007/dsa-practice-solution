class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        for(long long i = 0; i<=(num>>1); i++){
            if(i*i == num) return true;
        }
        return false;
    }
};


// efficient solution

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int odd = 1;

        while (num > 0)
        {
            num = num - odd;
            odd = odd + 2;
        }
        return num == 0;
    }
};