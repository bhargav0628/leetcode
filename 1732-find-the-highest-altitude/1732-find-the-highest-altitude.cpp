class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> solution(gain.size()+1);
         solution[0] = 0;
         int sum = 0;
         int minimum = 0;
         for(int i = 1;i<=gain.size();i++){
            sum+=gain[i-1];
            solution[i] = sum;
            minimum = max(minimum,solution[i]);
         }
         return minimum;
    }
};