class Solution {
public:
    bool isSubsequence(string s, string t) {
        int r1 = 0;
        int r2 = 0;
        while(r1<s.size()&&r2<t.size()){
            if(s[r1]==t[r2]){
                r1++;
                r2++;
            } else {
                r2++;
            }
        }
        if(r1!=s.size()){
            return false;
        }
        return true;
    }
};