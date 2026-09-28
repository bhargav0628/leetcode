class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> solution (arr.size());
        int leader = -1;
        for(int i = arr.size()-1;i>=0;i--){
            solution[i] = leader;
             if(arr[i]>leader){
                leader = arr[i];
             }
        }
        return solution;
    }
};