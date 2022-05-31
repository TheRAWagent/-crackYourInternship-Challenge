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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return head;
        ListNode* head1=head;
        while(head1->next!=NULL)
        {
            if(head1->val==head1->next->val)
            {
                head1->next=head1->next->next;
            }
            else
                head1=head1->next;
        }
        return head;
    }
};