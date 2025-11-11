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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = 0;

        ListNode* head = new ListNode();
        ListNode* ptr = head;
        sum = l1->val + l2->val;
        head->val = sum % 10;
        carry = sum > 9 ? 1 : 0;

        l1= l1->next;
        l2 = l2->next;

        while(l1 && l2){
            sum = l1->val + l2->val + carry;
            ListNode* newNode = new ListNode(sum%10);
            ptr->next = newNode;
            ptr = ptr->next;
            carry = sum > 9 ? 1 : 0;

            l1= l1->next;
            l2 = l2->next;
        }

        while(l1){
            sum = l1->val + carry;
            ListNode* newNode = new ListNode(sum%10);
            ptr->next = newNode;
            ptr = ptr->next;

            carry = sum > 9 ? 1 : 0;

            l1= l1->next;
        }

        while(l2){
            sum = l2->val + carry;
            ListNode* newNode = new ListNode(sum%10);
            ptr->next = newNode;
            ptr = ptr->next;

            carry = sum > 9 ? 1 : 0;

            l2= l2->next;
        }

        if(carry){
            ListNode* newNode = new ListNode(1);
            ptr->next = newNode;
        }

        return head;
    }
};