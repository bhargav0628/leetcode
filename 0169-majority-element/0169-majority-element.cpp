class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0;
        int count = 0;
        for(int x:nums){
            if(count==0){
                c = x;
            }
            if(x==c){
                count++;
            } else {
                count--;
            }
        }
        return c;
    }
};