class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "AEIOUaeiou";
        int left = 0;
        int right = s.size()-1;
        while(left<right){
            if(vowels.find(s[left])== string::npos){
                left++;
            } else if(vowels.find(s[right])==string::npos){
                right--;
            }
            else if(vowels.find(s[left])!=string::npos&&vowels.find(s[right])!=string::npos){
                char temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                 left++;
            right--;
            }
            
        }
        return s;
    }
};