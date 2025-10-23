class Solution {
public:
    bool hasSameDigits(string s) {
        string temp = s;
        while(temp.length() != 2){
            for(int i = 0; i<temp.length()-1; i++){
                temp[i] = (temp[i] + temp[i+1]) % 10;
            }
            temp.resize(temp.length()-1);
        }
        return temp[0] == temp[1] ? true : false;
    }
};