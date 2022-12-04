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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        ListNode* tempAA = headA;
        ListNode* tempBB = headB;
        int countA = 0;
        int countB = 0;
        int countz = 0;
        while(tempA!=NULL)
        {
            tempA=tempA->next;
            countA++;
        }
        while(tempB!=NULL)
        {
            tempB=tempB->next;
            countB++;
        }
        if(countA>countB)
        {
            countz = countA-countB;
            while(countz>0)
            {
                tempAA = tempAA->next;
                countz--;
            }
        }
        else{
            countz = countB-countA;
            while(countz>0)
            {
                tempBB = tempBB->next;
                countz--;
            }
        }
        while(tempAA->next!=NULL)
        {
            if(tempAA==tempBB)
            {
                return tempAA;
            }
            tempAA = tempAA->next;
            tempBB = tempBB->next;
        }
        if(tempAA==tempBB)
        {
            return tempAA;
        }
        return NULL;

    }
};