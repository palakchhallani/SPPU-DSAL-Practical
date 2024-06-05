#include<iostream>
using namespace std;
 
 struct node
 {
    string name;
    int count;
    node *child[10];
 };
 
 class Tree
 {
     public:
    node *root;
    Tree()
    {
        root=NULL;
    }
    void createnode();
    ;void displaytree();
 };
 
 void Tree::createnode()
 {
    root= new node;
    cout<<"Enter the name of book"<<endl;
    cin>>root->name;
    cout<<"Enter the number of chapter in book";
    cin>>root->count;
    
    for(int i=0;i<root->count;i++)
    {
        root->child[i]=new node;
        cout<<"\t\tenter the name of chapter"<<i+1<<":-";
        cin>>root->child[i]->name;
        cout<<"\t\tenter the number of section in chapter"<<root->child[i]->name<<":-";
        cin>>root->child[i]->count;
        
        for(int j=0;j<root->child[i]->count;j++)
        {
            root->child[i]->child[j]=new node;
            cout<<"\t\t\t\tEnter the name of section"<<j+1<<endl;
            cin>>root->child[i]->child[j]->name;
        }
    }
 }
 
 void Tree::displaytree()
 {
     cout<<"------------------INDEX--------------------------"<<endl;
     cout<<"chapter\t\t\t\t\t\tsection\t\t\t\t\t\tname"<<endl;
     cout<<root->name;
     for(int i=0;i<root->count;i++)
     {
         cout<<"\t\t"<<root->child[i]->name;
         for(int j=0;j<root->child[i]->count;j++)
         {
             cout<<"\t\t\t\t"<<root->child[i]->child[j]->name;
         }
             
     }
 }
 
 int main()
 {
     int ch;
     Tree t;
     while(true)
     {
         cout<<"==================MENU========================";
         cout<<"\n1.Create"<<endl;
         cout<<"2.Display"<<endl;
         cout<<"3.Exit"<<endl;
         cout<<"Enter your choice"<<endl;
         cin>>ch;
         
         switch(ch)
         {
             case 1:t.createnode();
             break;
             case 2:t.displaytree();
             break;
             case 3:exit;
             break;
             default:
             cout<<"Wrong Choice";
             break;
         }
     }    
     return 0;
 }
