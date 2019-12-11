/*
PROGRAM BY ANOM DEVGUN
GR: 21810017
Successfully implemented SLL and its various operations with edge cases resolved.
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head = NULL;
void create()                               //Function to create nodes at end of list
{
    struct node *nn,*t;
    nn= new node;
    cout<<"Enter Data\n";
    cin>>nn->data;
    nn->next = NULL;
    if(head == NULL)
        head = nn;
        else
        {
            t=head;
            while(t->next != NULL)
                t = t->next;
            t->next = nn;
        }
}
void beg()								//ADD at beginning of list
{
    struct node *nn,*t= NULL;
    nn= new node;
    cout<<"Enter Data\n";
    cin>>nn->data;
    if(head == NULL)
    {
        head = nn;
        nn->next = NULL;
    }
    else{
        nn->next = head;
        head = nn;
    }
}
void disp()                                   //Function to display data of nodes;
{
    struct node *t;
    t=head;
    if(t == NULL)
    {
        cout<<"List is empty\n";
        return;
    }
    while(t != NULL)
    {
        cout<<"Data: "<<t->data<<"\n";
        t=t->next;
    }
}
void sear()                 //Function to search data in list
{
    struct node *t;
    int dat,sr=1;
    t = head;
    cout<<"Enter Data to be searched\n";
    cin>>dat;
    if(t == NULL)
    {
        cout<<"The list is empty.\nNow exiting to main menu.\n";
        return;
    }
    while(t->data != dat)
    {
        t = t->next;
        sr++;

    if(t -> data != dat && t -> next == NULL)
    {
        cout<<"Search data not found in list.\n";
        return;
    }
    }
        cout<<dat<<" Found at node "<<sr<<"\n";
}
void del()              //Function to delete data from list
{
    struct node *t,*a;
    int dat,sr=1;
    t = head;
    cout<<"Enter Data to be searched and deleted\n";
    cin>>dat;
    if(t == NULL)
    {
        cout<<"The list is empty.\n Now exiting to main menu.\n";
        return;
    }
    while(t->data != dat)
    {
        a=t;
        t = t->next;
        sr++;

    if(t -> data != dat && t -> next == NULL)
    {
        cout<<"Search data not found in list.\n";
        return;
    }
    }
    if(head->data == dat )
    {
        head = head->next;
    }
        cout<<dat<<" Found at node "<<sr<<"\n";
        cout<<"Node and data deleted\n";
        a->next = t->next;
        delete(t);
}
void mod()              //Function to modify data in list
{
    struct node *t;
    int dat,sr=1;
    t = head;
    cout<<"Enter Data to be modified\n";
    cin>>dat;
    if(t == NULL)
    {
        cout<<"The list is empty.\n Now exiting to main menu.\n";
        return;
    }
    while(t->data != dat)
    {
        t = t->next;
        sr++;

    if(t -> data != dat && t -> next == NULL)
    {
        cout<<"Search data not found in list.\n";
        return;
    }
    }
        cout<<dat<<" Found at node "<<sr<<"\n";
        cout<<"Enter new data\n";
        cin>>t->data;
}
int main()
{
int ch;
while(1)
{
    cout<<"\n1)For Entering data(at list end)\n";
    cout<<"2)For Displaying linked list data\n";
    cout<<"3)for adding at beginning of list\n";
    cout<<"4)To search data from list\n";
    cout<<"5)To delete data from list\n";
    cout<<"6)To modify data in list \n";
    cout<<"7)To exit\n";
    cin>>ch;
    cout<<"\n";
    switch(ch)
    {
    case 1:
        create();
        break;
    case 2:
        disp();
        break;
    case 3:
        beg();
        break;
    case 4:
        sear();
        break;
    case 5:
        del();
        break;
    case 6:
        mod();
        break;
    case 7:
        cout<<"\nNow exiting\n";
        exit(1);
        break;
    default:
        cout<<"Invalid choice.\n";
    }
}
}
