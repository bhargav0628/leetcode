class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        string solution;
        for(int i = 0;i<s.size();i++){
            mp[s[i]]++;
        }
        while(solution.size()<s.size()){
            int m = 0;
            char sa;
            for(auto x : mp){
                if(x.second>m){
                    m = x.second;
                    sa = x.first;
                }
            }
            for(int j = 0;j<m;j++){
              solution+=sa;
            }
            mp[sa] = 0;

        }
        return solution;
    }
};