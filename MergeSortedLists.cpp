// MERGE TWO SORTED LISTS
/*
  PROBLEM LINK
  https://leetcode.com/problems/merge-two-sorted-lists/description/?envType=study-plan&id=level-1
*/
// SOLUTION
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list = new ListNode();
        if(list1 == NULL && list2 == NULL)
            return list1;
        else if(list1 == NULL && list2 != NULL)
            return list2;
        else if(list1!= NULL && list2 == NULL)
            return list1;

        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        if(list1->val < list2->val || list1->val == list2->val)
        {
            list->val = list1->val;
            ptr1 = list1->next;
        }
        else
        {
            list->val = list2->val;
            ptr2 = list2->next;
        }
        ListNode* ptr = list;


        while(ptr1 != NULL || ptr2 != NULL)
        {
            if(ptr1!= NULL && ptr2!= NULL)
            {
                if(ptr1->val < ptr2->val || ptr1->val == ptr2->val)
                {
                    ptr->next = ptr1;
                    ptr1 = ptr1->next;
                    ptr = ptr->next;
                }
                else
                {
                    ptr->next = ptr2;
                    ptr2= ptr2->next;
                    ptr = ptr->next;
                    cout<<ptr->val<<endl;
                }
            }
            else if( ptr1!= NULL && ptr2== NULL)
            {
                ptr->next = ptr1;
                ptr1 = ptr1->next;
                ptr = ptr->next;
            }
            else if(ptr2!= NULL && ptr1== NULL)
            {
                ptr->next = ptr2;
                ptr2= ptr2->next;
                ptr = ptr->next;
            }
        }
        
        return list;
    }
};
