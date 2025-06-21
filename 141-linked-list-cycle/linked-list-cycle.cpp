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
        ListNode* slowPtr = head;
        if(!slowPtr)
            return false;
        ListNode* fastPtr = head->next;

        if(!fastPtr)
                return false;

        while(slowPtr != fastPtr){
            slowPtr = slowPtr->next;
            if(!slowPtr)
                return false;
            
            fastPtr = fastPtr->next;
            if(!fastPtr)
                return false;
            
            fastPtr = fastPtr->next;
            if(!fastPtr)
                return false;
        }

        return true;
    }
};