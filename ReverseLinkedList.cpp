// REVERSE LINKED LIST
/*
  PROBLEM LINK
  https://leetcode.com/problems/reverse-linked-list/?envType=study-plan&id=level-1
*/
// SOLUTION
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
            return head;
        
        ListNode* current = head;
        ListNode* ptr = head;
        ptr = ptr->next;
        ListNode* prev = NULL;
        while(current != NULL)
        {
            current->next = prev;
            prev = current;
            current = ptr;
            if(ptr!= NULL)
                ptr = ptr->next;
        }
        head = prev;
        return head;
    }
};
