class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i = 0;i<operations.size();i++){
            if(operations[i]=="C"){
                st.pop();
            } else if(operations[i]=="D"){
                int r = 2*st.top();
                st.push(r);
            } else if(operations[i] == "+"){
               int x = st.top();
               st.pop();
               int y = st.top();
               st.pop();
               int p = x+y;
               st.push(y);
               st.push(x);
               st.push(p);
            } else{
                int q = stoi(operations[i]);
                st.push(q);
            }
        }
        int sum = 0;
        while(!st.empty()){
             sum += st.top();
             st.pop();
        }
        return sum;
    }
};