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
        if(!head->next)
            return true;

        ListNode* slowPtr = head;
        ListNode* fastPtr = head;

        bool isEven = false;
        while(fastPtr){
            fastPtr = fastPtr->next;
            if(fastPtr){
                fastPtr = fastPtr->next;
                if(fastPtr)
                    slowPtr = slowPtr->next;
                else
                    isEven = true;
            }
        }

        ListNode* rightPtr = slowPtr->next;

        //Reverse the list till slowPtr
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* ptr = current->next;

        while(current != rightPtr){
            current->next = prev;
            prev = current;

            current = ptr;
            ptr = ptr->next;
        }

        if(!isEven)
            slowPtr = slowPtr->next;
        
        while(slowPtr && rightPtr){
            if(slowPtr->val != rightPtr->val)
                return false;
            
            slowPtr = slowPtr->next;
            rightPtr = rightPtr->next;
        }
        if(slowPtr || rightPtr)
            return false;

        return true;
    }
};