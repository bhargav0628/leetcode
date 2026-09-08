class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> solution(k);
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(int j = 0;j<k;j++){
            int push = 0;
            int m = 0;
        for(auto x :mp){
            if(x.second>m){
            m = x.second;
            push = x.first;
            }
        }

        solution[j] = push;
        mp[push] = 0;
        }
        return solution;
    }
};