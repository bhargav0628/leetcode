class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i =0;i<asteroids.size();i++){
            bool destroyed = false;
            while(!st.empty()&&st.top()>0&&asteroids[i]<0){
                 if(abs(asteroids[i])>st.top()){ 
                    st.pop();
                    
                 } else if(abs(asteroids[i])==st.top()){
                      st.pop();
                      destroyed = true;
                      break;
                 } else{
                      destroyed = true;
                      break;
                 }
            }
            if(!destroyed){
                st.push(asteroids[i]);
            }
        }
        vector<int> solution(st.size());
        int k = st.size()-1;
        while(!st.empty()){
            solution[k] = st.top();
            cout<<st.top()<<" ";
            st.pop();
            k--;
        }
        return solution;
    }
};