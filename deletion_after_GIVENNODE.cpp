#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		Node *prev;
	
	Node(int data)
	{
		this->data = data;
		next = NULL;
		prev = NULL;
	}
};

void traverseforward(Node *node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
	}
}

void traversebackward(Node *node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node = node->prev;
	}
}

void deletionaftergivennode(Node *node)
{
	Node *temp = node->next;
	node->next = node->next->next;
	
	free(temp);
}
int main()
{
	Node *head = new Node(9);
	Node *a = new Node(8);
	Node *b = new Node(7);
	Node *c = new Node(6);
	
	head->next = a;
	a->prev = head;
	
	a->next = b;
	b->prev = a;
	
	b->next = c;
	c->prev = b;
	
	cout<<"before deletion: "<<" ";
	traverseforward(head);
	
	deletionaftergivennode(a);
	
	cout<<"\nafter deletion: "<<" ";
	traverseforward(head);
	return 0;
}
