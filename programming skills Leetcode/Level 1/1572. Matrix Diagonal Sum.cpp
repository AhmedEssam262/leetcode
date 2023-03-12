class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
    int res = 0;
    int size = mat.size();
    if (size % 2 == 1) {
        for (int i = 0; i < size; i++) {
            res += mat[i][i];
            res += mat[i][size - 1 - i];
        }
        res -= mat[size / 2][size / 2];
    }
    else {
        for (int i = 0; i < size; i++) {
            res += mat[i][i];
            res += mat[i][size - 1 - i];
        }
    }
    return res;
}
};
