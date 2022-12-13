class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        bool zercheck = false;
        vector<int> col(n,0);
        int j =0;
        while(j<m)
        {
            for(int i = 0;i<n;i++)
            {
                if(matrix[j][i]==0)
                {
                    zercheck = true;
                    col[i]++;
                }
            }
            if(zercheck==true)
            {
                for(int i = 0;i<n;i++)
                {
                    matrix[j][i]=0;
                }
                zercheck = false;
            }
            j++;
        }
        for(int x = 0;x<n;x++)
        {
            if(col[x]>0)
            {
                for(int i = 0;i<m;i++)
                {
                    matrix[i][x]=0;
                }
            }
        }
    }
};