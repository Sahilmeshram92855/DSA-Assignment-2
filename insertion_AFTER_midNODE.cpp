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
	while(node!= NULL)
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
		node->prev;
	}
}

void insertionaftermiddlenode(Node *node, int data)
{
	Node *fast = node;
	Node *slow = node;
	
	while(fast!=NULL && fast->next!=NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	
	Node *newnode = new Node(data);
	
	newnode->next = slow->next;
	slow->next->prev = newnode;
	
	slow->next = newnode;
	newnode->prev = slow;
	
}

int main()
{
	Node *head = new Node(11);
	Node *a = new Node(15);
	Node *b = new Node(22);
	
	
	head->next = a;
	a->prev = head;
	
	a->next = b;
	b->prev = a;
	
	cout<<"after insertion: "<<" ";
	traverseforward(head);
	
	insertionaftermiddlenode(head, 1);
	
	cout<<"\nafter insertion: "<<" ";
	traverseforward(head);
	
	return 0;
}
