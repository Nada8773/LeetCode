/*
 ============================================================================
Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
 ============================================================================
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* curr=head;
    struct ListNode* prev=NULL;
    struct ListNode* tail;
    
    while(curr!=NULL)
    {
        tail=curr->next;
        curr->next=prev;
        prev=curr;
        curr=tail;
    }
    head=prev;
   
    return head;
    
}