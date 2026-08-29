class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0;i<9;i++){
            unordered_map<int,int> row;
            unordered_map<int,int> col;
            for(int j = 0;j<9;j++){
                if(isdigit(board[i][j]))
                row[board[i][j]]++;
            }
            for(auto x : row){
                if(x.second>1){
                    return false;
                }
            }
            for(int k = 0;k<9;k++){
                if(isdigit(board[k][i]))
                col[board[k][i]]++;
            }
            for(auto x : col){
                if(x.second>1){
                    return false;
                }
            }
        }
        for(int i = 0;i<9;i+=3){
            for(int j = 0;j<9;j+=3){
                unordered_map<int,int> box;
                for(int k = i;k<i+3;k++){
                    for(int l = j;l<j+3;l++){
                        if(isdigit(board[k][l]))
                       box[board[k][l]]++;
                    }
                }
                for(auto x: box){
                    if(x.second>1){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};