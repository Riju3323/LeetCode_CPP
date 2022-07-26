class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int plch=0,fi=0,se=0;
        for(int i=2;i<=cost.size();i++)
        {
            plch = fi;
            fi = min(fi + cost[i-1],se + cost[i-2]);
            se = plch;
        }
        return fi;
    }
};