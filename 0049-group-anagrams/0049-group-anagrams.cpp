class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> solution; 
        unordered_map<string,vector<string>> mp;
        for(int i = 0;i<strs.size();i++){
            string original = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(original);
            
        }
        for(auto x:mp){
            solution.push_back(x.second);
        }
        return solution;
    }
};