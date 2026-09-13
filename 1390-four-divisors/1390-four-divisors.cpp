class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int m = nums.size();
        int sum = 0;
        for(int i = 0;i<m;i++){
            vector<int> divisors = finddivisors(nums[i]);
            if(divisors.size()==4){
             sum = sum+ divisors[0]+divisors[1]+divisors[2]+divisors[3];
            }
        }
        return sum;
    }
    vector<int> finddivisors(int n){
        vector<int> ans;
        int j = 0;
        for(int i = 1;i*i<=n;i++){
            if(n%i==0){
               ans.push_back(i);
               if(i!=n/i){
                ans.push_back(n/i);
               }
            }
        }
        return ans;
    }
};