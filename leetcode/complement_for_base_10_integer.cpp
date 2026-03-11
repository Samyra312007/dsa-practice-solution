class Solution {
public:
    string decToBinary(int n){
        if(n == 0) return "0";
        string binary;
        while(n>0){
            binary += (n%2 == 0 ? '0' : '1');
            n /= 2;
        }
        reverse(binary.begin(), binary.end());
        return binary;
    }
    int bitwiseComplement(int n) {
        string binary = decToBinary(n);
        string complement = "";
        for(int i = 0; i<binary.length(); i++){
            complement += (binary[i] == '0' ? '1' : '0');
        }
        int decimal = stoi(complement, nullptr, 2);
        return decimal;
    }
};