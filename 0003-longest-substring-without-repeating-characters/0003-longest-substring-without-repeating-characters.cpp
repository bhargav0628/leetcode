class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        unordered_map<char,int> mp;
        int maxl = 0;
        for(int k= i;k<=j;k++){
                mp[s[k]]++;
            }
        while(i<s.size()&&j<s.size()){   
            for(auto x:mp){
                if(x.second>1){
                    mp[s[i]]--;
                    i++;
                }
            }
            maxl = max(maxl,j-i+1);
            j++;
            mp[s[j]]++;
        }
        return maxl;
    }
};