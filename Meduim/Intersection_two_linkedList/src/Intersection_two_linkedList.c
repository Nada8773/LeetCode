/*
 ============================================================================
https://leetcode.com/explore/interview/card/top-interview-questions-medium/107/linked-list/785/


Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,0,1,8,4,5], skipA = 2, skipB = 3
Output: Reference of the node with value = 8

Input: intersectVal = 2, listA = [0,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
Output: Reference of the node with value = 2
Input Explanation: The intersected node's value is 2 (note that this must not be 0 if the two lists intersect). From the head of A, it reads as [0,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes before the intersected node in A; There are 1 node before the intersected node in B.


Input: intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
Output: null
Input Explanation: From the head of A, it reads as [2,6,4]. From the head of B, it reads as [1,5]. Since the two lists do not intersect, intersectVal must be 0, while skipA and skipB can be arbitrary values.
Explanation: The two lists do not intersect, so return null.
 ============================================================================
 */




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/************************** 12 ms******/
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {

    struct ListNode * tmpA=headA;
    struct ListNode * tmpB=headB;

    if(tmpA==NULL||tmpB==NULL)  return NULL;

    while(tmpA!=NULL||tmpB!=NULL)
    {
        if(tmpA==NULL) tmpA=headB;
        if(tmpB==NULL) tmpB=headA;
        if(tmpA==tmpB) return tmpA;
        tmpA=tmpA->next;
        tmpB=tmpB->next;
    }
    return NULL;
}


