class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> solution; 
        unordered_map<string,vector<string>> mp;
        vector<string> original;
        for(int i = 0;i<strs.size();i++){
            original.push_back(strs[i]);
            sort(strs[i].begin(),strs[i].end());
            cout<<strs[i]<< " ";
            mp[strs[i]].push_back(original[i]);
            
        }
        for(auto x:mp){
            solution.push_back(x.second);
        }
        return solution;
    }
};