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
    ListNode* partition(ListNode* head, int x) {
        ListNode *smallHead=NULL;
        ListNode *largeHead=NULL;
        ListNode *smallTail=NULL;
        ListNode *largeTail=NULL;

        ListNode *curr=head;
        while(curr!=NULL){
            ListNode *next=curr->next;
            if(curr->val<x){
                if(smallHead==NULL){
                    smallHead=curr;
                    smallTail=curr;
                }
                else{
                    smallTail->next=curr;
                    smallTail=curr;
                }
            }
                else{
                    if(largeHead==NULL){
                    largeHead=curr;
                    largeTail=curr;
                }
                else{
                largeTail->next=curr;
                    largeTail=curr;
                }
               }
               curr=next;
            }
            if(smallHead==NULL)
                return largeHead;
                if(largeHead==NULL)
                return smallHead;
                
                largeTail->next=NULL;
                smallTail->next=largeHead;
                return smallHead;
    }
};