#include<iostream>
using namespace std;

struct btnode
{
int value;
struct btnode *l;
struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1;

void create()
{
int data;
cout<<"enter the node to "
