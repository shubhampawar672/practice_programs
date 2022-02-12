#include <iostream>

using namespace std;
struct node{
int data;
node *next;
};
node *head=NULL;
void enqueue(int x)
{

    node *newnode=new node;
    newnode->data=x;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        node *temp=head;
        while(temp->next!=NULL)
        {

            temp=temp->next;
        }
           temp->next=newnode;
    }

}
void dequeue()
{
    if(head==NULL)
    {
        cout<<"Underflow\n";
        return;
    }

    head=head->next;
    cout<<"Element deleted\n";

}
void display()
{
    if(head==NULL)
    {
        cout<<"Underflow\n";
        return;
    }
     node *temp=head;
     while(temp!=NULL)
     {
         cout<<temp->data<<" ";
         temp=temp->next;
     }
}
int Front()
{
    return head->data;
}
int rear()
{
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    return temp->data;
}
int main()
{
  int ch,x;
  cout<<"MENU\n";
  cout<<"1.Enqueue\n2.Dequeue\n3.Front\n4.Rear\n5.Display\n6.exit\n";
  while(ch!=6)
  {
      cout<<"\nenter your choice\n";
      cin>>ch;
      switch(ch)
      {
      case 1:
        cout<<"enter data\n";
        cin>>x;
        enqueue(x);
        break;
      case 2:
        dequeue();
        break;
      case 3:
        cout<<"\nfront element is: "<<Front()<<endl;
        break;
      case 4:
        cout<<"element at rear end is : "<<rear()<<endl;
        break;
      case 5:
        display();
        break;
      case 6:
        exit(1);
        break;
      default:
        cout<<"wrong choice..\n";
        break;
      }
  }
    return 0;
}
