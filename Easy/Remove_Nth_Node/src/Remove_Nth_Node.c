/*
 ============================================================================
 Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
 ============================================================================
 */
 
 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
 
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

 struct ListNode* tmp1=head;
    struct ListNode* tmp=head;
    struct ListNode* tail=head->next;
    int count=0;
    int size;
    int i=1;

    while(tmp1!=NULL)
    {
        count++;
        tmp1=tmp1->next;
    }


   size=count-n;
   if(count==1) return NULL;
   if(n==1)
   {
       while(tail->next!=NULL)
       {
           tmp=tmp->next;
           tail=tail->next;
       }

       tmp->next=NULL;
       return head;
   }
    while(i<size+1)
    {
        tmp=tmp->next;
        tail=tail->next;
        i++;

    }

    tmp->val=tail->val;
    tmp->next=tail->next;

    return head;
}
