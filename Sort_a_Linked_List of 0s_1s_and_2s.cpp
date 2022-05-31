// C++ Program to sort a linked list 0s, 1s or 2s
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node
{
	public:
	int data;
	Node* next;
};

// Function to sort a linked list of 0s, 1s and 2s
void sortList(Node *head)
{
	Node *h1=head,*h2=head;
  int count[3]={0,0,0};
  while(h1!=NULL)
  {
  	if(h1->data==0)
      count[0]++;
    else if(h1->data==1)
      count[1]++;
    else
      count[2]++;
    h1=h1->next;
  }
  for(int i=0;i<count[0];i++)
  {
  	h2->data=0;
    h2=h2->next;
  }
  for(int i=0;i<count[1];i++)
  {
  	h2->data=1;
    h2=h2->next;
  }
  for(int i=0;i<count[2];i++)
  {
  	h2->data=2;
    h2=h2->next;
  }
}

/* Function to push a node */
void push (Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print linked list */
void printList(Node *node)
{
	while (node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
	cout << endl;
}

/* Driver code*/
int main(void)
{
	Node *head = NULL;
	push(&head, 0);
	push(&head, 1);
	push(&head, 0);
	push(&head, 2);
	push(&head, 1);
	push(&head, 1);
	push(&head, 2);
	push(&head, 1);
	push(&head, 2);

	cout << "Linked List Before Sorting\n";
	printList(head);

	sortList(head);

	cout << "Linked List After Sorting\n";
	printList(head);

	return 0;
}

// This code is contributed by rathbhupendra
