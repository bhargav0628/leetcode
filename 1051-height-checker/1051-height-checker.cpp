class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> something;
        for(int i = 0;i<heights.size();i++){
            something.push_back(heights[i]);
        }
        sort(something.begin(),something.end());
        int sum = 0;
        for(int i = 0;i<heights.size();i++){
            if(heights[i]!=something[i]){
                sum++;
            }
        }
        return sum;
    }
};