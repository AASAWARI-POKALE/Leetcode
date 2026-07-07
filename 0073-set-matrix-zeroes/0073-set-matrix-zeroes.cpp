class Solution {
public:
    void markRow(int i, vector<vector<int>>& matrix) {
    int n = matrix[0].size();
    for (int j = 0; j < n; j++) {
        if (matrix[i][j] != 0)
            matrix[i][j] = -999;
    }
}
   void markColumn(int i, vector<vector<int>>& matrix) {
    int m = matrix.size();
    for (int j = 0; j < m; j++) {
        if (matrix[j][i] != 0)
            matrix[j][i] = -999;
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int m = matrix.size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    markRow(i,matrix);
                    markColumn(j,matrix);
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == -999) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};