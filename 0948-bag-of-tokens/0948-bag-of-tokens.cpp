class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int left = 0;
        int right = tokens.size() - 1;
        int score = 0;
        int maximum = 0;
        while(left<=right) {
            if(tokens[left]<=power) {
                power -= tokens[left];
                score++;
                left++;
                maximum = max(maximum, score);
            }
            else if(score>0) {
                power += tokens[right];
                score--;
                right--;
            }
            else {
                break;
            }
        }
        return maximum;
    }
};