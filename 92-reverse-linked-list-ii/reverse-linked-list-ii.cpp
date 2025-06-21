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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right)
            return head;

        ListNode* leftPrev = head;
        ListNode* prev = head;
        ListNode* curr = head;
        ListNode* next = head;
        ListNode* lefti = head;

        int currPos = 1;

        while(curr && currPos != left){
            leftPrev = curr;
            curr = curr->next;
            currPos++;
        }

        if(!curr)
            return head;

        lefti = curr;
        prev = lefti;
        curr = curr->next;
        currPos++;

        while(currPos != right){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            currPos++;
        }

        next = curr->next;
        curr->next = prev;
        leftPrev->next = curr;
        lefti->next = next;

        if(lefti==head){
            // if(next){
            //     prev = curr;
            //     curr = next;
            //     while(!curr){
            //         next = curr->next;
            //         curr->next = prev;
            //         prev = curr;
            //         curr = next;
            //     }
            // }
            // else
                head = curr;
        }
            
        return head;
    }
};