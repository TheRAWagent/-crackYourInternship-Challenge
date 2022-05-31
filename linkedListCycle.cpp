/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)return false;
        (*head).val=1e6;
        while(true)
        {
            if(head->next==NULL)return false;
            if((*(head->next)).val==1e6)
                return true;
            (*head).val=1e6;
            head=head->next;
        }
    }
};