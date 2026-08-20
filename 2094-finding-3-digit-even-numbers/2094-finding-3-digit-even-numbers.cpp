class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> solution; 
        sort(digits.begin(),digits.end());
        for(int i = 0;i<digits.size();i++){
            int num = 0;
                if(digits[i]!=0){
                    for(int j = 0;j<digits.size();j++){
                        for(int k = 0;k<digits.size();k++){
                            if(k!=i&&k!=j&&i!=j){
                                 num = digits[i]*100+digits[j]*10+digits[k];
                                 if(num%2==0){
                                    if(find(solution.begin(),solution.end(),num)==solution.end()){
                                 solution.push_back(num);
                                    }
                                 }
                            }
                        }
                    }
                }
        }  
        return solution;        
    }
};