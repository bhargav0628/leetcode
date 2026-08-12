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
        while(left<right){
            if(s[left]!=s[right]){
                left++;
              if(!palindrome(s,left,right)){
                left--;
                right--;
              }
              if(!palindrome(s,left,right)){
                return false;
              }
            }
            left++;
            right--;

        }
         
            return true;
    }
};