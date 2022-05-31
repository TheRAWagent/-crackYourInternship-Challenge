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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)return NULL;
        ListNode* h1=head;
        while(h1->next!=NULL)
        {
            if(h1->next->val==val)
                h1->next=h1->next->next;
            else
                h1=h1->next;
        }
        if(head->val==val)
        {
            if(h1->next==NULL)
                return NULL;
            else
                return head->next;
        }
        return head;
    }
};