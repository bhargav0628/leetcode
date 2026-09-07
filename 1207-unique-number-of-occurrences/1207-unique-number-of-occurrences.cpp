class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int x : arr) {
            mp[x]++;
        }
        vector<int> freq;
        for(auto x : mp) {
            if(find(freq.begin(), freq.end(), x.second) != freq.end()) {
                return false;
            }
            freq.push_back(x.second);
        }
        return true;
    }
};