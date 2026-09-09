class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index;
        for(int i = 0;i<nums.size();i++){
            int suml = 0;
            int sumr = 0;
            for(int j = 0;j<i;j++){
                suml+= nums[j];
            }
            for(int k = nums.size()-1;k>i;k--){
                sumr+=nums[k];
            }
            if(sumr==suml){
                return i;
            }
        }
        return -1;
    }
};