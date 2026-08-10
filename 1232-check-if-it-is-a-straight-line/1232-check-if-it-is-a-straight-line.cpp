class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int n = c.size();

        for(int i=0;i<n-2;i++){
            int x = (c[i+1][1]-c[i][1])*(c[i+2][0]-c[i+1][0]);
            int y = (c[i+2][1]-c[i+1][1])*(c[i+1][0]-c[i][0]);

            if(x!=y){
                return false;
            }
        }
        return true;
    }
};