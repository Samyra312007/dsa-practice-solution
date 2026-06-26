class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int maxione = -1;
        int cntone = 0;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            if(arr[i] == 1){
                cntone++;
                maxione = max(maxione, cntone);
            }
            else cntone = 0;
        }
        int maxizero = -1;
        int cntzero = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] == 0){
                cntzero++;
                maxizero = max(maxizero, cntzero);
            }
            else cntzero = 0;
        }
        
        return maxizero > maxione ? maxizero : maxione;
    }
};