/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr)return nullptr;
        Node* h=head;
        while(h!=nullptr)
        {
            Node* temp = new Node(h->val);
            temp->next=h->next;
            h->next=temp;
            h=h->next->next;
        }
        h=head;
        while(h!=nullptr)
        {
            if(h->random!=nullptr)
                h->next->random=h->random->next;
            else
                h->next->random=nullptr;
            h=h->next->next;
        }
        Node* newHead=head->next;
        h=head;
        Node* nh=newHead;
        while(h!=nullptr)
        {
            h->next=h->next->next;
            if(nh->next!=nullptr)
                nh->next=nh->next->next;
            h=h->next;
            nh=nh->next;
        }
        return newHead;
    }
};