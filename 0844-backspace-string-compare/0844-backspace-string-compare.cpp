class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string p,q;
        for(int i = 0;i<s.size();i++){
            
             if(isalnum(s[i])){
                p+=s[i];
            } else {
                if(!p.empty()){
               p.erase(p.size()-1);
                }
            }
        
        }
        for(int j = 0;j<t.size();j++){ 
           
            if(isalnum(t[j])){
                 q+=t[j];
            } else {
                if(!q.empty()){
                q.erase(q.size()-1);
            }
            }
        }
        if(p==q){
            return true;
        }
        return false;
    }
};