class Solution {
  public:
    struct data{
        int value;
        int wgt;
        double vwt;
    };
    static bool custom(data a, data b){
        return a.vwt > b.vwt;
    }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<data> v(n);
        for(int i = 0; i<n; i++){
            v[i].value = val[i];
            v[i].wgt = wt[i];
            v[i].vwt = static_cast<double>(val[i])/wt[i];
        }
        sort(v.begin(), v.end(), custom);
        double ans = 0;
        for(int i = 0; i<n; i++){
            if(v[i].wgt <= capacity){
                ans += v[i].value;
                capacity -= v[i].wgt;
            }
            else{
                ans += (v[i].vwt * capacity);
                break;
            }
        }
        return ans;
    }
};
