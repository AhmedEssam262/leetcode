class Solution {
public:
 bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    int i = 0;
    int j = 0;
    while (i < col - 1 || i<row-1) {

        while (j + i < col - 1 && j < row - 1)
        {

            if (matrix[j + 1][j + 1 + i] != matrix[j][j + i])
                return false;


            j++;
        }
        j = 0;
        while (j + i+1 < row - 1 && j < col - 1){        
            if (matrix[j + 2 + i][j + 1] != matrix[j + i+1][j])
                return false;
            j++;
        }
        i++;
        j = 0;

    }
    return true;
}
};
