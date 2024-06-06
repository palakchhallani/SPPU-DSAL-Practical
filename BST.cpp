
#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node *left, *right;
};

class BST
{
public:
	node *createnode(int);
	node *create_BST(node *,int);
	void display(node *);
	void minimum (node *);
	void maximum(node*);
	void search(node *);
};

node *BST:: createnode(int val)
{
	node *temp;
	temp=new node;
	temp->data=val;
	temp->left=temp->right=NULL;
	return temp;
}

node *BST::create_BST(node *root,int val)
{
	node *temp;
	temp=createnode(val);
	if(root==NULL)
		root=temp;
	else
	{
		if(val<root->data)
			root->left=create_BST(root->left,val);
		else
			root->right=create_BST(root->right,val);
	}
	return root;
}

void BST ::display(node *root)
{
	if(root!=NULL)
	{
		display(root->left); //L
		cout<<root->data <<" "; //V
		display(root->right); //R
	}
}

void BST:: minimum(node *root)
{
	node *trav=root;
	while(trav->left!=NULL)
		trav=trav->left;

	cout<<"\nMinimum value from BST is:"<<trav->data;
}

void BST:: maximum(node *root)
{
	node *trav=root;
	while(trav->right!=NULL)
		trav=trav->right;

	cout<<"\nMaximum value from BST is:"<<trav->data;
}

void BST::search(node *root)
{
	int key;
	node *trav=root;
	cout<<"\nEnter the key you want to search";
	cin>>key;
	if(trav->data==key)
		cout<<"Element found";
	else
	{
		if(trav->left->data==key)
			cout<<"Element found";
		else if(trav=trav->left);
		
		else if(trav->right->data!=key)
			trav=trav->right;
		else
			cout<<"Element not found";
	}

}
int main()
{
	int n,val;
	node *root=NULL;
	BST b;

	cout<<"Number of nodes=";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Data:";
		cin>>val;
		root=b.create_BST(root,val);
	}
	b.display(root);
	b.minimum(root);
	b.maximum(root);
	b.search(root);
	return 0;
}

//OUTPUT`
/*
Number of nodes=5
Enter Data:25
Enter Data:5
Enter Data:65
Enter Data:42
Enter Data:13
5 13 25 42 65 
Minimum value from BST is:5
Maximum value from BST is:65
Enter the key you want to search5
Element found
*/

