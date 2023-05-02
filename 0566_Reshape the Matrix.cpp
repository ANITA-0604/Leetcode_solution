class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat[0].size();
        int m = mat.size();
        if (r*c != n*m) return mat;
        vector<int> temp;
        for(int i = 0;i<mat.size();i++){
            for(int j = 0;j<mat[0].size();j++){
                temp.push_back(mat[i][j]);
            }
        }
        int idx= 0;
        vector< vector<int> > ans;
        for(int i = 0 ;i < r;i++){
            vector<int> t;
            for(int j = 0;j < temp.size()/r ;j++){
                t.push_back(temp[idx++]);
                
            }
            ans.push_back(t);
        }
        return ans;
    }
};
