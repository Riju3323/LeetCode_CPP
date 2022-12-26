class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int mxa = (n-1)*(min(height[i],height[j]));
        while(i<j)
        {
            mxa = max(mxa,(n-1)*(min(height[i],height[j])));
            if(height[i]>=height[j])
            {
                j--;
                n--;
            }
            else{
                i++;
                n--;
            }
        }
        return mxa;

    }
};