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
		node = node->next;
	}
}

void deletionatend(Node *head)
{
	Node *lastnode = head;
	
	while(lastnode->next!=NULL)
	{
		lastnode = lastnode->next;
	}
	
	lastnode->prev->next = NULL;
	
	free(lastnode);
}
int main()
{
	Node *head = new Node(11);
	Node *a = new Node(2);
	Node *b = new Node(10);
	Node *c = new Node(8);
	
	head->next = a;
	a->prev = head;
	
	a->next = b;
	b->prev = a;
	
	b->next = c;
	c->prev = b;
	
	cout<<"Before deletion: "<<" ";
	traverseforward(head);
	
	deletionatend(head);
	
	cout<<"\nAfter deletion: "<<" ";
	traverseforward(head);
	
	return 0;
}
