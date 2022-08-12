class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size()-1, temp = 0;
        while(i<j)
        {
            temp = numbers[i] + numbers[j];
            if(temp==target)
            {
                return {i+1,j+1};
            }
            if(temp>target)
            {
                j--;
            }
            if(temp<target)
            {
                i++;
            }
        }
        return {0,0};
        
    }
};