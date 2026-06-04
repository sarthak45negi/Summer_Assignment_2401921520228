class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m  = mat.size();
        int n = mat[0].size();
        vector<vector<int>>v(r,vector<int>(c));
        if(m*n != r*c) return mat;
        else{
            int k = 0 , l = 0;
            for(int i = 0 ; i < m ; i++){
                for(int j = 0 ; j < n ; j++){
                   v[l][k] = mat[i][j];
                   k++;
                   if(k == c){              
                     k = 0;
                     l++;
                    }
                }
            }
        }
        return v;
    }
};