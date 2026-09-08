class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        vector<string> solution;
        for(int i = 0;i<words.size();i++){
             mp[words[i]]++;
        }
        int prev = 0;
        for(int j = 0;j<k;j++){
            int m = 0;
            string str;
            for(auto x : mp){
                if(x.second>m){
                    m = x.second;
                    str = x.first;
                }
                else if(x.second==m&&(x.first<str)){
                    str = x.first;
                }
            }
            solution.push_back(str);
            mp[str] = 0;
        }
        return solution;
    }
};