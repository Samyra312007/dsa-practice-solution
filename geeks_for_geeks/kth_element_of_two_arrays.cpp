class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int n = a.size();
        int m = b.size();
        vector<int> res(n+m);
        int i = 0;
        int j = 0;
        int t = 0;
        while(i<n && j<m){
            if(a[i] < b[j]){
                res[t] = a[i];
                t++;
                i++;
            }
            else{
                res[t] = b[j];
                t++;
                j++;
            }
        }
        while(i<n){
            res[t] = a[i];
            t++;
            i++;
        }
        while(j<m){
            res[t] = b[j];
            t++;
            j++;
        }
        return res[k-1];
    }
};