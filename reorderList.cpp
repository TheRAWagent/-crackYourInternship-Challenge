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
    void reorderList(ListNode* head) {
        if(head->next==nullptr || head->next->next==nullptr)return;
        ListNode* h=head;
        while(h->next->next!=nullptr)h=h->next;
        ListNode* t=h,*end=h->next,*temp=head->next;
        t->next=nullptr;
        head->next=end;
        end->next=temp;
        reorderList(temp);
    }
};