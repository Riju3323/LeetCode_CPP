class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]++;
        int i=digits.size()-1;
        while(i>0)
        {
            if(digits[i]==10)
            {
                digits[i-1]++;
                digits[i]=0;
            }
            else {
                break;
            }
            i--;
        }
        if(digits[0]!=10)
        {
            return digits;
        }
        else {
            digits.insert(digits.begin(),1);
            digits[1]=0;
        }
        return digits;
    }
};