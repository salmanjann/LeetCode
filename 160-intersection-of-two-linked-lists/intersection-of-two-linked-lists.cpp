/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int m=0,n=0;

       for(ListNode* ptr = headA; ptr!=NULL; ptr= ptr->next,m++);
       for(ListNode* ptr = headB; ptr!=NULL; ptr= ptr->next,n++);

        ListNode* aPtr = headA;
        ListNode* bPtr = headB;

        if(m>n)
            for(int i=0; i<m-n; i++,aPtr=aPtr->next);
        else if(m<n)
            for(int i=0; i<n-m; i++,bPtr=bPtr->next);
        
        cout<<aPtr->val<<endl;
        cout<<bPtr->val<<endl;

        while(aPtr != NULL && bPtr != NULL){
            if(aPtr == bPtr)
                return aPtr;

            aPtr = aPtr->next;
            bPtr = bPtr->next;
        }
       return NULL;
    }
};