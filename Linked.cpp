#include <iostream>
#include <malloc.h>
using namespace std;

struct node
{
    struct node *next;
    int data;
};

struct node *head = NULL;
struct node *tail = NULL;

void add(int d);
void insertafter(int index , int d);
void display();

int main()
{
    add(2);
    add(4);
    add(8);
    add(10);
    display();
    cout<<endl;
    insertafter(3,6);
    display();
    return 0;
}

void add(int d)
{
    //node *temp = new node;
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp->data=d;
    temp->next = NULL;
    if(head==NULL)
    {
        head = temp;
    }
    else
    {
        tail->next = temp;
    }
    tail = temp;
}

void display()
{
    struct node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void insertafter(int index, int d)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    struct node* mhead = head;
    for(int i=1; i<index-1; i++)
    {
        mhead = mhead->next;
    }
    temp->next = mhead->next;
    mhead->next = temp;
}
