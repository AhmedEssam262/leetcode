class Solution {
public:
void rotate(vector<vector<int>>& matrix) {
    vector<vector<int>> matrix2=matrix;
    for (int i = 0; i < matrix[0].size(); i++) {
        for (int j =  matrix.size()-1; j >=0; j--) {
            matrix2[i][matrix[0].size()-1-j] = matrix[j][i];
        }
    }
    matrix = matrix2;
}
};
