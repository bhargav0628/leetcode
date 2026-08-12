class Solution {
public:
    bool palindrome(string s,int left,int right){
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        bool x,y;
        while(left<right){
            if(s[left]!=s[right]){
                left++;
               x = palindrome(s,left,right);
              if(!x){
                left--;
                right--;
                 y = palindrome(s,left,right);
              }
              if(!y){
                return false;
              }
            }
            left++;
            right--;

        }
         
            return true;
    }
};