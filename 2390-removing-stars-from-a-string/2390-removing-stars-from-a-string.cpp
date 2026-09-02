class Solution {
public:
    string removeStars(string s) {
        vector<char> solution;
        stack<char> st;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='*'){
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            solution.push_back(st.top());
            st.pop();
        }
        string sa;
        int x = solution.size()-1;
        while(x>=0){
           sa+= solution[x];
           x--;
        }
        return sa;
    }
};