#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
	Node *prev;
	int data;
	Node *next;
	
	Node(int data)
	{
		prev = NULL;
		this->data = data;
		next = NULL;		
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

void insertionatbeginning(int data, Node* &head)
{
	Node *newNode = new Node(data);
	newNode->next = head;
	head->prev = newNode;
	
	head = newNode;	
}
int main()
{
	Node *head = new Node(25);
	Node *a = new Node(14);
	Node *b = new Node(55);
	
	head->next = a;
	a->prev = head;
	
	a->next = b;
	b->prev = a;
	
	cout<<"Before Insertion: "<<" ";
	traverseforward(head);
	
	insertionatbeginning(10, head);
	
	cout<<"\nAfter Insertion: "<<" ";
	traverseforward(head);
	
	
	return 0;
}
