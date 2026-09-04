class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> vec;
        for(int i = 0;i<position.size();i++){
            double time = (double)(target-position[i])/speed[i];
            vec.push_back({position[i],time});
        }
        sort(vec.rbegin(),vec.rend());
        stack<double> st;

        for(auto x : vec) {
            double time = x.second;
            if(st.empty() || time > st.top()) {
                st.push(time);
            }

        }
       return st.size();
    }
};