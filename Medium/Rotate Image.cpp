class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(); int i=0; int j=n-1;
        while(i<=j)
        {
            for(int z=0;z<(j-i);z++)
            {
                swap(matrix[i][i+z],matrix[i+z][j]);
                swap(matrix[j][j-z],matrix[i][i+z]);
                swap(matrix[i][i+z],matrix[j-z][i]);
            }
            ++i;
            --j;
        }
    }
};