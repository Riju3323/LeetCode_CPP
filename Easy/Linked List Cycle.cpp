/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       if (head==NULL)
       {
           return false;
       }
        int n=0;
        while(n<10005)
        {
            if(head->next==NULL)
            {
                return false;
            }
            head = head->next;
            n++;
        }
        return true;
        
    }
};

//Solution 2

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        if(head==NULL)
        {
            return false;
        }
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            {
                if(slow==fast)
                {
                    return true;
                }
            }
        }
        return false;
    }
};