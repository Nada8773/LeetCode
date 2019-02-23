/*
 ============================================================================
 Input: 1->2->3->4->5->NULL
Output: 1->3->5->2->4->NULL

Input: 2->1->3->5->6->4->7->NULL
Output: 2->3->6->7->1->5->4->NULL
 ============================================================================
 */




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(head==NULL)return NULL;
    struct ListNode* odd=head;
    struct ListNode* tmp=head->next;
    struct ListNode* even=head->next;
     struct ListNode* even_f=head->next;

    while(tmp!=NULL)
    {
        tmp=tmp->next;
        if(tmp==NULL)break;
        odd->next=tmp;
        odd=odd->next;
        tmp=tmp->next;
        even->next=tmp;
        even=even->next;
    }
  odd->next=even_f;  // link odd and even together
    return head;
}


