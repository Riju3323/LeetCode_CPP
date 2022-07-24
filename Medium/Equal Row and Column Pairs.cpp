class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string,int> mr;
        unordered_map<string,int> mc;
        string s = "";
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                s += grid[i][j] + '0';
            }
            if(mr.find(s)==mr.end())
            {
                mr[s] = 1;
            }
            else{
              mr[s]++;
            }
            s = "";    
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                s += grid[j][i] + '0';
            }
            if(mc.find(s)==mc.end())
            {
                mc[s] = 1;
            }
            else{
              mc[s]++;
            }
            s = "";
            
        }
        long long sum=0;
        for(auto x:mr)
        {
          s = x.first;
          if(mc.find(s)!=mc.end())
          {
            sum += (x.second)*(mc[s]);
          }
        }
        return sum;
    }
};