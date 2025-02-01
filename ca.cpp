#include<iostream>
using namespace std;

struct node
{
    string song;
    string artist_name;
    node* next;
    node* pre;
}*head,*last,*temp;

int main()
{
    int choice=1;
    head=last=NULL;
    while (choice==1)
    {
        temp=new node;
        cout<<"Enter the song: ";
        cin>>temp->song;
        cout<<"Enter the singer name: ";
        cin>>temp->artist_name;
        temp->next=NULL;
        temp->pre=NULL;
        if(head==NULL)
        {
            head=last=temp;
        }
        else
        {
            last->next=temp;
            temp->pre=last;
            last=temp;
        }
        cout<<"Want another node(1/0): ";
        cin>>choice;
    }
    
    cout<<"\n-----------Playlist----------"<<endl;
    temp=head;
    while (temp!=NULL)
    {
        cout<<"Song: "<<temp->song<<endl;
        cout<<"By: "<<temp->artist_name<<endl<<endl;
        temp=temp->next;

    }
    
    
    return 0;
}