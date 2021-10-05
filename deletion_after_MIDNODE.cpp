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

void traverseforwrd(Node *node)
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

void deletionaftermidelement(Node *node)
{
	Node *fast = node;
	Node *slow = node;
	
	while(fast!=NULL && fast->next!=NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	
	Node *temp = slow->next;
	slow->next = slow->next->next;
	
	free(temp);
}
int main()
{
	Node *head = new Node(150);
	Node *a = new Node(89);
	Node *b = new Node(99);
	
	head->next = a;
	a->prev = head;
	
	a->next = b;
	b->prev = a;
	
	cout<<"before deletion: "<<" ";
	traverseforwrd(head);
	
	deletionaftermidelement(head);
	
	cout<<"\nafter deletion: "<<" ";
	traverseforwrd(head);
	return 0;
}
