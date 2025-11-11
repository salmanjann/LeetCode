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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next )
            return NULL;
        
        ListNode* nPtr = head;
        ListNode* ptr = head;

        for(int i=0;i<n;i++){
            if(nPtr)
                nPtr = nPtr->next;
        }

        if(nPtr){
            while(nPtr->next){
                nPtr = nPtr->next;
                ptr = ptr->next;
                
            }
            ptr= ptr->next = ptr->next->next;
        }
        else{
            // delete head
            head = head->next;
        }

        // if(ptr == head && n>1)


        return head;
    }
};