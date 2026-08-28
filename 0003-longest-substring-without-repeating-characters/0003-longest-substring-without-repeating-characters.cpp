class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        unordered_map<char,int> mp;
        int maxl = 0;
        for(int j = 0;j<s.size();j++){
             mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i]]--;
                i++;
            }
            maxl = max(maxl,j-i+1);
           
        }
       return maxl;
    }
};