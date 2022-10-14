/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
                ListNode* count = head;
        ListNode* oper = head;
        int cnt = 0;
        while(count!=NULL)
        {
            count = count->next; 
            cnt++;
        }
        stack<int> c;
        for(int i=0;i<cnt/2;i++)
        {
            c.push(oper->val);
            oper = oper->next;
        }
        if(cnt%2==1)
        {
            oper = oper->next;
        }
        for(int i=0;i<cnt/2;i++)
        {
            if(c.top()==oper->val)
            {
                c.pop();
            }
            else
            {
                return false;
            }
            oper = oper->next;
        }
        return true;
    }
};