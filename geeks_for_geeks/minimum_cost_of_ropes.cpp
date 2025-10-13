class Solution {
  public:
    int minCost(vector<int>& arr) {
        priority_queue<int, vector<int>, greater<int>> p;
        for(int i = 0; i<arr.size(); i++){
            p.push(arr[i]);
        }
        int cost = 0;
        while(p.size() > 1){
            int rope = p.top();
            p.pop();
            rope += p.top();
            p.pop();
            cost += rope;
            p.push(rope);
        }
        return cost;
    }
};