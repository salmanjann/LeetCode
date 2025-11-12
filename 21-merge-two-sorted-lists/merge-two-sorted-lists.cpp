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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
            return list2;
        if(!list2)
            return list1;

        ListNode* head= NULL;
        ListNode* ptr = head;

        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        
        int val = 0;
        while(ptr1 && ptr2){
            if(ptr1->val <= ptr2->val){
                val = ptr1->val;
                ptr1 = ptr1->next;
            }
            else{
                val = ptr2->val;
                ptr2 = ptr2->next;
            }

            ListNode* newNode = new ListNode(val);
            if(!head){
                head = newNode;
                ptr = head;
            }
            else{
                ptr->next = newNode;
                ptr = newNode;
            }
        }
        while(ptr1){
            ListNode* newNode = new ListNode(ptr1->val);
            ptr->next = newNode;
            ptr = newNode;

            ptr1 = ptr1->next;
        }
        while(ptr2){
            ListNode* newNode = new ListNode(ptr2->val);
            ptr->next = newNode;
            ptr = newNode;
            ptr2 = ptr2->next;

        }
        return head;
    }
};