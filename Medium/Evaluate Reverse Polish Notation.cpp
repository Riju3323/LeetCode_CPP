class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> val;
        int eval = 0;
        int temp1=0,temp2=0;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+")
            {
                temp1 = val.top();
                val.pop();
                temp2 = val.top();
                val.pop();
                val.push(temp1+temp2);
                // cout<<val.top()<<" ";
            }
            else if(tokens[i]=="-")
            {
                temp1 = val.top();
                val.pop();
                temp2 = val.top();
                val.pop();
                val.push(temp2-temp1);
                // cout<<val.top()<<" ";
            }
            else if(tokens[i]=="*")
            {
                temp1 = val.top();
                val.pop();
                temp2 = val.top();
                val.pop();
                val.push(temp1*temp2);
                // cout<<val.top()<<" ";
            }
            else if(tokens[i]=="/")
            {
                temp1 = val.top();
                val.pop();
                temp2 = val.top();
                val.pop();
                val.push(temp2/temp1);
                // cout<<val.top()<<" ";
            }
            else {
                eval = stoi(tokens[i]);
                val.push(eval);
            }
        }
        return val.top();
    }
};