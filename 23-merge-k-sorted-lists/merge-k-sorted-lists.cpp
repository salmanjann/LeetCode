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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(!n)
            return NULL;
        
        ListNode* head= NULL;
        ListNode* ptr=NULL;
        ListNode* listPtr=NULL;
        for(int i=0; i<n; i++){
            // cout<<"Ith iteration "<<i<<endl;
            listPtr = lists[i];
            // cout<<listPtr->val<<endl;
            if(!listPtr)
                continue;
            
            ptr = head;

            while(ptr && listPtr){
                
                if(ptr->val < listPtr->val){
                    if(ptr->next != NULL)
                        ptr= ptr->next;
                    else
                        break;
                }
                else {
                    ListNode* newNode = new ListNode(listPtr->val);
                    int temp = newNode->val;
                    newNode->val = ptr->val;
                    ptr->val = temp;
                    newNode->next = ptr->next;
                    ptr->next = newNode;
                    listPtr = listPtr->next;
                }
                
            }
            while(listPtr){
                if(!head){
                    head = new ListNode(listPtr->val);
                    ptr = head;
                    // cout<<"ptr val here "<<ptr->val<<endl;
                }
                else{

                    ListNode* newNode = new ListNode(listPtr->val);
                    // cout<<"new node "<<newNode->val<<endl;

                    ptr->next = newNode;
                    ptr = ptr->next;
                    // cout<<"ptr val "<<ptr->val<<endl;
                }
                listPtr = listPtr->next;
            }

            // cout<<"List here "<<endl;
            // ptr = head;
            // while(ptr){
            //     cout<<ptr->val<<" -> ";
            //     ptr = ptr->next;
            // }
            // cout<<endl;
        }

        return head;
    }
};