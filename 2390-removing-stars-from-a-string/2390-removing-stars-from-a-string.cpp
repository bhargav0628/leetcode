class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='*'){
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        string sa;
        while(!st.empty()){
            sa+=st.top();
            st.pop();
        }
        reverse(sa.begin(),sa.end());
        return sa;
    }
};