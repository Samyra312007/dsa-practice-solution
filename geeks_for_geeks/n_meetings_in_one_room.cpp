class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    struct data{
        int start;
        int end;
        int pos;
    };
    static bool custom(data a, data b){
        return a.end < b.end;
    }
    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();
        vector<data> arr(n);
        for(int i = 0; i<n; i++){
            arr[i].start = start[i];
            arr[i].end = end[i];
            arr[i].pos = i+1;
        }
        sort(arr.begin(), arr.end(), custom);
        int count = 1;
        int freetime = arr[0].end;
        vector<int> ds;
        ds.push_back(arr[0].pos);
        for(int i = 1; i<n; i++){
            if(arr[i].start > freetime){
                count++;
                freetime = arr[i].end;
                ds.push_back(arr[i].pos);
            }
        }
        return count;
    }
};