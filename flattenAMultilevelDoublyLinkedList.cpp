/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    vector<Node*> v;
    void traversal(Node* head)
    {
        if(head==nullptr)return;
        v.push_back(head);
        if(head->child)traversal(head->child);
        if(head->next)traversal(head->next);
        
    }
    Node* flatten(Node* head) {
        if(head==nullptr)return nullptr;
        else traversal(head);
        for(int i=0;i<v.size()-1;i++)
        {
            v[i]->next=v[i+1];
        }
        v[v.size()-1]->next=nullptr;
        for(int i=v.size()-1;i>0;i--)
        {
            v[i]->prev=v[i-1];
        }
        v[0]->prev=nullptr;
        for(int i=0;i<v.size();i++)
            v[i]->child=nullptr;
        return v[0];
    }
};