class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = 0;i<nums.size();i++){
            int m = target - nums[i];
            if(mp.find(m)!=mp.end()){
                return{mp[m],i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};