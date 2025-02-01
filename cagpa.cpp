#include<iostream>
using namespace std;

struct node{
    int data;
    node*leftchild;
    node*rightchild;

};*root=NULL;

insert (int a,"root")
{
    if(root=NULL)
    {
        node * temp=new node;
        temp ->data=x;
        temp ->LC=NULL;
        temp ->RC=NULL;
        return temp;
    }
    else if (root ->data<x)
    {
      root -> LC=insert(x,NULL);
    }

}
