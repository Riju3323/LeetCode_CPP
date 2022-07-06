class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
       
        int k = grid.size();
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<k;j++)
            {
                if(i==j || i==(k-j-1))
                {
                    if (grid[i][j] == 0)
                    {
                        return false;
                    }
                }
                else 
                {
                    if(grid[i][j] != 0)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
