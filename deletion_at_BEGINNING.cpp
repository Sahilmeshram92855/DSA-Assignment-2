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

void deletionatbeginning(Node* &head)
{
	Node *temp = head;
	head = head->next;
	head->prev = NULL;
	
	free(temp);
}
int main()
{
	Node *head = new Node(15);
	Node *a = new Node(11);
	Node *b = new Node(00);
	
	head->next = a;
	a->prev = head;
	
	a->next = b;
	b->prev = a;
	
	cout<<"before deletion: "<<" ";
	traverseforward(head);
	
	deletionatbeginning(head);
	
	cout<<"\nafter deletion: "<<" ";
	traverseforward(head);
	
	return 0;
}
