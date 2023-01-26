// MIDDLE OF LINKED LIST
/*
  PROBLEM LINK
  https://leetcode.com/problems/middle-of-the-linked-list/?envType=study-plan&id=level-1
 */
// SOLUTION
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr = head;
        int nNodes =0;
        while(ptr!=NULL)
        {
            nNodes++;
            ptr = ptr->next;
        }
        ptr = head;
        for(int i=0; (i<nNodes/2);i++)
            ptr = ptr->next;
        return ptr;
    }
};
