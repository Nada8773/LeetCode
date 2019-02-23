/*
 ============================================================================
 Input: head = [4,5,1,9], node = 1
Output: [4,5,9]
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void deleteNode(struct ListNode* node) {

    struct ListNode* tmp=node->next;
   // if ( node->next == NULL || node == NULL)return;
    node->val=tmp->val;
    node->next=tmp->next;
    free(tmp);
}
