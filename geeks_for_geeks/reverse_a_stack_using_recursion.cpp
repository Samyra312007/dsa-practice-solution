class Solution {
  public:
    void helper(stack<int> &st, queue<int> &q){
        if(st.empty()) return;
        int num = st.top();
        st.pop();
        q.push(num);
        helper(st, q);
        int num1 = q.front();
        q.pop();
        st.push(num1);
    }
    void reverseStack(stack<int> &st) {
        queue<int> q;
        helper(st, q);
    }
};