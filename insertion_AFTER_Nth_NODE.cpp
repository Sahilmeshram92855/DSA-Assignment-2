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

void forwardtraverse(Node *node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
	}
}

void backwardtraverse(Node *node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node = node->prev;
	}
}

void insertionafterNthnode(int data, int npos, Node *node)
{
	while(node->next!=NULL && npos>1)
	{
		node = node->next;
		npos--;
	}
	
	Node *newnode = new Node(data);
	
	newnode->next = node->next;
	node->next->prev = newnode;
	
	node->next = newnode;
	newnode->prev = node;
}
int main()
{
	Node *head = new Node(11);
	Node *a = new Node(14);
	Node *b = new Node(105);
	Node *c = new Node(111);
	
	head->next = a;
	a->prev = head;
	
	a->next = b;
	b->prev = a;
	
	b->next = c;
	c->prev = b;
	
	cout<<"before insertion: "<<" ";
	forwardtraverse(head);
	
	insertionafterNthnode(2101, 3, head);
	
	cout<<"\nafter insertion: "<<" ";
	forwardtraverse(head);
	
	
	return 0;
}
