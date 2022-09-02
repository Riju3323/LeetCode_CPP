class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size(),i=0;
        for(int k=0;k<n;k++)
        {
            if(target>matrix[k][0])
            {
                i++;
            }
            if(target==matrix[k][0])
            {
                return true;
            }
        }
        if(i>0)
        {
            i--;
        }
        return binary_search(matrix[i].begin(),matrix[i].end(),target);
    }
};