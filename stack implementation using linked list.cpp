#include <iostream>

using namespace std;
struct node
{
    int data;
    node *next;
};
node *head=NULL;
void push(int x)
{
    node *newnode=new node;
    newnode->data=x;
    newnode->next=head;
    head=newnode;


}
int isempty()
{
    if(head==NULL)
        return 1;

    return 0;
}
void pop()
{
    if(isempty())
       {
           cout<<"underflow\n";
            return;
       }
       node *ptr=head;
       int ele=ptr->data;
       cout<<"popped element : "<<ele<<endl;

       head=head->next;
        delete(ptr);

}
void top()
{
    if(isempty())
        cout<<"stack is empty\n";
    else
    cout<<"Top element is : "<<head->data;
}
void print()
{
    if(isempty())
    {
        cout<<"Stack is empty..\n";
        return ;
    }
    node *temp=head;
    cout<<"stack elements are \n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<end;
}

int main()
{
    int ch=0,ele;
    cout<<"\tMENU\n";
    cout<<"1.push\n2.pop\n3.isempty\n4.display stack\n";
    while(ch!=5)
    {
        cout<<"enter your choice \n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter element :\n";
            cin>>ele;
            push(ele);
            break;
        case 2:
            pop();
            break;
        case 3:
            if(isempty())
                cout<<"Stack is empty\n";
            else
                cout<<"Stack is not empty\n";
            break;
        case 4:
            print();
            break;
        case 5:
            exit(1);
            break;
        default:
            cout<<"enter proper choice\n";

        }
    }
   return 0;
}
