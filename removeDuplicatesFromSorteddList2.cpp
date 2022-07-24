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
        if(head==nullptr || head->next==nullptr)return head;
        ListNode* start = new ListNode(-101,head),*k=start;
        int p;
        while(k!=nullptr)
        {
            if(k->next && k->next->next && k->next->val==k->next->next->val)
            {
                p=k->next->val;
                while(k->next->val==p)
                {
                    if(k->next->next)k->next=k->next->next;
                    else
                    {
                        k->next=nullptr;
                        break;
                    }
                }
            }
            else
                k=k->next;
        }
        return start->next;
    }
};