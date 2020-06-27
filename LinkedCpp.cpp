#include <iostream>

using namespace std;

class LinkedList
{
public:
    struct node
    {
        node *next;
        int data;
    };
    node *head = NULL;
    node *tail = NULL;
    void add(int d);
    void display();
    void insertfirst(int d);
    void insertlast(int d)
    {
        add(d);
    }
    LinkedList operator +(LinkedList &obj)  // adding two linked list
    {
        LinkedList tempobj;
        int sum;
        node *temp1; node *temp2;   // two pointers to iterate in two linked lists
        temp1 = this->head;   // this pointer is pointing to caller linked list object
        temp2 = obj.head;
        while(temp1!=NULL)
        {
            sum = temp1->data + temp2->data;
            tempobj.add(sum);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return tempobj;
    }
};

int main()
{
    LinkedList obj1,obj2,obj3, obj4;
    obj1.add(2);
    obj1.add(4);
    obj1.add(6);
    obj1.display();
    obj2.add(1);
    obj2.add(3);
    obj2.add(5);
    obj2.display();
    obj3 = obj1 + obj2;
    cout<< ":::::::::::::"<<endl;
    obj3.display();
    return 0;
}

void LinkedList::add(int d)
{
    node *temp = new node;
    //struct node* temp = (struct node*) malloc(sizeof(struct node));
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

void LinkedList::display()
{
    node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
 void LinkedList::insertfirst(int d)
 {
     if(head==NULL)
     {
         add(d);
     }
     else
     {
         node* temp = new node;
         temp->data = d;
         temp->next = head;
         head = temp;
     }
 }
