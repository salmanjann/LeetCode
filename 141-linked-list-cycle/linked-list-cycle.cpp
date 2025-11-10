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
        ListNode* slowPtr=head;
        ListNode* fastPtr=head;

        if(head!=NULL)
            fastPtr=head->next;

        while(slowPtr != NULL){
            if(fastPtr == NULL) 
                break;
            if(slowPtr== fastPtr)
                return true;
            
            slowPtr = slowPtr->next;
            if(fastPtr != NULL)
                fastPtr = fastPtr->next;
            if(fastPtr != NULL)
                fastPtr = fastPtr->next;

        }


        return false;
    }
};