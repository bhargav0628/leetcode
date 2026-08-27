class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i = 0;
        int j = p.size() - 1;
        vector<int> solution;
        unordered_map<char,int> mp;
        unordered_map<char,int> freq;
        for(int q = 0;q<p.size();q++){
            mp[p[q]]++;
        }
        for(int k = i;k<=j;k++){
                freq[s[k]]++;
            }
        while(j<s.size()){
            if(freq==mp){
                solution.push_back(i);
            }
            freq[s[i]]--;
            if(freq[s[i]] == 0)
    freq.erase(s[i]);
            i++;
            j++;
            if(j<s.size())
            freq[s[j]]++;
        }
        return solution;
    }
};