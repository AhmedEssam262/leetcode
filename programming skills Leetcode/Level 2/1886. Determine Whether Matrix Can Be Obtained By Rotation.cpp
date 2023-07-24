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
    bool check(vector<vector<int>>& mat, vector<vector<int>>& target) {
        bool flag=true;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]!=target[i][j])
                    flag= false;
            }
        }
        return flag;
    }
       bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
           bool res;
           res=check(mat,target);
            if(res==true){
                return true;
            }

           rotate(mat);
           res=check(mat,target);
            if(res){
                return true;
            }
            
           rotate(mat);
           res=check(mat,target);
            if(res==true){
                return true;
            }
            
            rotate(mat);
           res=check(mat,target);
            if(res==true){
                return true;
            }
           return false;
    }
};
