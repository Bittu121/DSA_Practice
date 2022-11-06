/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
*/
#include<iostream>
using namespace std;
ListNode*reverseList(ListNode* head) {
    ListNode *prev =NULL;
    ListNode *curr = head;
    ListNode *temp;
    while(curr){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

