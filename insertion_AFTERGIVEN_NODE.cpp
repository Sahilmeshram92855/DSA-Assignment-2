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

void insertionaftergivennode(int data, Node *givennode)
{
	Node *newnode = new Node(data);
	
	newnode->next = givennode->next;
	givennode->next->prev = newnode;
	
	givennode->next = newnode;
	newnode->prev = givennode;
}

int main()
{
	Node *head = new Node(11);
	Node *a = new Node(15);
	Node *b = new Node(16);
	
	head->next = a;
	a->prev = head;
	
	a->next = b;
	b->prev = a;
	
	b->next = NULL;
	
	cout<<"Before insertion: "<<" ";
	traverseforward(head);
	
	insertionaftergivennode(100, a);
	
	cout<<"\nAfter insertion: "<<" ";
	traverseforward(head);
	
	return 0;
}
