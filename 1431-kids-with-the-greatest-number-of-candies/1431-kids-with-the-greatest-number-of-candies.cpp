class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum = 0;
        vector<bool> solution;
        for(int i = 0;i<candies.size();i++){
              maximum = max(candies[i],maximum);
        }
        for(int i =0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maximum){
                solution.push_back(true);
            } else {
                solution.push_back(false);
            }
        }
        return solution;
    }
};