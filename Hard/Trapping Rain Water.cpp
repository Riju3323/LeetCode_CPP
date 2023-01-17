class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size()-1;
        vector<pair<int,int>> mex(height.size(),{0,0});
        int res=0;
        int l=height[0];
        if(height.size()<2)
        {
            return 0;
        }
        mex[0].first=0;
        mex[height.size()-1].second=0;
        for(int i = 1;i<height.size();i++)
        {
            if(height[i]>=l)
            {
                l=height[i];
            }
            mex[i].first=l;
        }
        l = height[height.size()-1];
        for(int i = height.size()-2;i>=0;i--)
        {
            if(height[i]>=l)
            {
                l=height[i];
            }
            mex[i].second=l;
        }
        for(int i = 0;i<height.size();i++)
        {
           if((min(mex[i].first,mex[i].second) - height[i])>0)
           res += (min(mex[i].first,mex[i].second) - height[i]);
        }
        return res;
    }
};