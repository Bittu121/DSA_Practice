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
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*reverse=new ListNode(0);
        reverse->next=head;
        ListNode*prev1=NULL;
        ListNode*curr1 = reverse;
        for(int i=0;i<left;i++){
            prev1=curr1;
            curr1=curr1->next;
        }
        ListNode*prev2=prev1;
        ListNode*curr2=curr1;
        ListNode*temp=NULL;
        for(int i=left;i<=right;i++){
            temp=curr2->next;
            curr2->next=prev2;
            prev2=curr2;
            curr2=temp;
        }
        prev1->next=prev2;
        curr1->next=curr2;
        return reverse->next;
    }
};