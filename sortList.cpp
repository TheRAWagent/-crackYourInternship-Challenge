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
    vector<ListNode*> v;
    ListNode* sortList(ListNode* head) {
        if(head==nullptr)return nullptr;
        while(head!=nullptr)
        {
            v.push_back(head);
            head=head->next;
        }
        sort(v.begin(),v.end(),[](ListNode* a,ListNode* b){return a->val<b->val;});
        for(int i=0;i<v.size()-1;i++)
            v[i]->next=v[i+1];
        v[v.size()-1]->next=nullptr;
        return v[0];
    }
};