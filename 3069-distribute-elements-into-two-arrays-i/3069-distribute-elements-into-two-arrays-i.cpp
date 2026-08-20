class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int k = 2;k<nums.size();k++){
            int i = arr1.size()-1;
            int j = arr2.size()-1;
             if(arr1[i]>arr2[j]){
                 arr1.push_back(nums[k]);
             } else {
                arr2.push_back(nums[k]);
             }
        }
        vector<int> result(arr1.size()+arr2.size());
        for(int p = 0;p<arr1.size();p++){
            result[p] = arr1[p];
        }
        for(int q = arr1.size();q<arr1.size()+arr2.size();q++){
            result[q] = arr2[q - arr1.size()];
        }
        return result;
    }
};