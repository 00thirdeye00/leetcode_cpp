class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();
        if(rows*cols != r*c)
            return mat;
        vector<vector<int>> res;
        vector<int> temp;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                temp.push_back(mat[i][j]);
                if(temp.size() == c){
                    res.push_back(temp);
                    temp.clear();
                }
            }
        }
        return res;
    }
};
