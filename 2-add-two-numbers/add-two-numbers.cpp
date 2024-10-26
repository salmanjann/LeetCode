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
        int sum = carry + l1->val + l2->val;
        if (sum >= 10)
            carry = 1;
        else {
            carry = 0;
        }

        ListNode* ans = new ListNode(sum % 10);
        ListNode* ptr = ans;

        l1 = l1->next;
        l2 = l2->next;

        while (l1 && l2) {
            sum = carry + l1->val + l2->val;
            if (sum >= 10)
                carry = 1;
            else {
                carry = 0;
            }

            ListNode* newNode = new ListNode(sum % 10);
            ptr->next = newNode;
            ptr = newNode;

            l1 = l1->next;
            l2 = l2->next;
        }

        if (l1) {
            while (l1) {
                sum = carry + l1->val;
                if (sum >= 10)
                    carry = 1;
                else {
                    carry = 0;
                }

                ListNode* newNode = new ListNode(sum % 10);
                ptr->next = newNode;
                ptr = newNode;

                l1 = l1->next;
            }
        } else if (l2) {
            while (l2) {
                sum = carry + l2->val;
                if (sum >= 10)
                    carry = 1;
                else {
                    carry = 0;
                }

                ListNode* newNode = new ListNode(sum % 10);
                ptr->next = newNode;
                ptr = newNode;

                l2 = l2->next;
            }
        }

        if (carry == 1) {
            ListNode* newNode = new ListNode(1);
            ptr->next = newNode;
        }

        return ans;
    }
};