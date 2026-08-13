class Solution {
public:
    int trap(vector<int>& height) {
         int count = 0;
         int left = 0;
         int right = height.size()-1;
         int maxl = 0,maxr = 0;
         while(left<right){
            if(height[left]<height[right]){
                if(height[left]>maxl){
                    maxl = height[left];
                } else {
                    count += maxl - height[left];
                }
                left++;
            }
            else {
                if(height[right]>maxr){
                    maxr = height[right];
                } else {
                    count += maxr - height[right];
                }
                right--;
            }
         }
         return count;
    }
};