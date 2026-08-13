class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersect;
        int x = 0;
        int y = 0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(x<nums1.size()&&y<nums2.size()){
            if(nums1[x]==nums2[y]){
                if(!binary_search(intersect.begin(),intersect.end(),nums1[x])){
                intersect.push_back(nums1[x]);
                }
            }
            if(nums1[x]>nums2[y]){
                y++;
            } else {
                x++;
            }
        }
        return intersect;
    }
};