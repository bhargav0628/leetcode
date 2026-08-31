class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0;i<tokens.size();i++){
            int num = 0;
            int x ,y ;
            if(tokens[i]=="+"){
                x = st.top();
                st.pop();
                y = st.top();
                st.pop();
                num = x+y;
                st.push(num);
            }else if(tokens[i]=="-"){
                x = st.top();
                st.pop();
                y = st.top();
                st.pop();
                num = y-x;
                st.push(num);
            }else if(tokens[i]=="*"){
                x = st.top();
                st.pop();
                y = st.top();
                st.pop();
                num = x*y;
                st.push(num);
            }else if(tokens[i]=="/"){
                x = st.top();
                st.pop();
                y = st.top();
                st.pop();
                num = y/x;
                st.push(num);
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};