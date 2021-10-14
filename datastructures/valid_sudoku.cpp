class Solution {
    public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> s_rows(9), s_cols(9), s_blocks(9);


        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                
                int curr = board[i][j]; //curr -> current element

                if(s_rows[i].count(curr) ||
                   s_cols[j].count(curr) ||
                   s_blocks[(i/3*3)+(j/3)].count(curr)){
                    return false;
                }
                s_rows[i].insert(curr);
                s_cols[j].insert(curr);
                s_blocks[(i/3*3)+(j/3)].insert(curr);

            }
        }
        return true;
    }
};
