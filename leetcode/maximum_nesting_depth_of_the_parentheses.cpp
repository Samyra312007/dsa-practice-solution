class Solution {
public:
    int maxDepth(string s) {
        int len = s.length();
        stack<char> st;
        int maxi = INT_MIN;
        for(int i = 0; i<len; i++){
            int siz = st.size();
            maxi = max(maxi, siz);
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                st.pop();
            }
        }
        return maxi;
    }
};