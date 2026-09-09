class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index;
        int rightsum = 0;
        int leftsum = 0;
        for(int i = 0;i<nums.size();i++){
            rightsum+=nums[i];
        }
        for(int j = 0;j<nums.size();j++){
            rightsum-=nums[j];
            if(rightsum==leftsum){
                return j;
            }
            leftsum+= nums[j];
            
        }
        return -1;
    }
};