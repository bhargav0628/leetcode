class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> solution(temperatures.size());
        stack<int> st;
        for(int i = temperatures.size()-1;i>=0;i--){
            if(st.empty()){
                st.push(i);
                solution[i]= 0;
            }
            else { 
                 while(!st.empty()&&(temperatures[st.top()]<=temperatures[i])){
                    st.pop();
                 }
                 if(!st.empty()){
                    solution[i]=st.top()-i;
                 }
                  st.push(i);
            }
        }
            return solution;
    }
};