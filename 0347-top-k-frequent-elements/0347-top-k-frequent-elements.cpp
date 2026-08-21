class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> solution;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
            while(k>0){
                int del = 0;
                int max = 0;
                for(auto x:mp){
                    if(x.second>max){
                        max = x.second;
                        del = x.first;
                    }
                }
            solution.push_back(del);
            mp[del] = 0;
            k--;
            }
        
        return solution;
    }
};