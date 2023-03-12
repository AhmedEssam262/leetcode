class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if ((mat.size() * mat[0].size()) != r * c) {
		    return mat;
	    }
        vector<int> temp;
        vector< vector<int >> res(r, vector<int>(c, 0));
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                temp.push_back(mat[i][j]);
            }
        }
        int pos = 0;
        for (int m = 0; m < r; m++) {
            for (int n = 0; n < c; n++) {
			    res[m][n]=temp[pos];
                pos++;
            }
        }
        return res;
        }
};  
