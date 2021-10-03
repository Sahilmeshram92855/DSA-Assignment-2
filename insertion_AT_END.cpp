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

void insertionatend(int data, Node* head)
{
	Node *lastnode = head;
	
	while(lastnode->next!=NULL)
	{
		lastnode = lastnode->next;
	}
	
	Node *newNode = new Node(data);
	
	lastnode->next = newNode;
	newNode->prev = lastnode;
}


int main()
{
	Node *head = new Node(14);
	Node *a = new Node(22);
	Node *b = new Node(25);
	Node *c = new Node(56);
	
	head->next = a;
	a->prev = head;
	
	a->next = b;
	b->prev = a;
	
	b->next = c;
	c->prev = b;
	
	c->next = NULL;
	
	cout<<"Before traversal: "<<" ";
	traverseforward(head);
	
	insertionatend(1007, head);
	
	cout<<"\nAfter traversal: "<<" ";
	traverseforward(head);
	
	return 0;
}
