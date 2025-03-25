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
    ListNode* middleNode(ListNode* head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head->next;

        while(fastPtr != NULL){
            fastPtr = fastPtr->next;
            if(fastPtr != NULL)
                fastPtr = fastPtr->next;
            slowPtr = slowPtr->next;
        }

        return slowPtr;
    }
};