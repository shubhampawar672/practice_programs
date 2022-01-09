//shubham pawar
//doubly linked list
#include <iostream>

using namespace std;
struct node{
int data;
node *prev;
node *next;
};
struct node *head=NULL;
void Insert_beginning(int x)
{
    node *temp=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        temp->data=x;
        temp->prev=NULL;
        temp->next=NULL;
         head=temp;
    }
    else
    {
        temp->data=x;
        temp->prev=NULL;
        temp->next=head;
        head->prev=temp;
        head=temp;

    }
    cout<<"node inserted\n";
    }

void  Insert_end(int x)
    {
         node *temp=(struct node*)malloc(sizeof(struct node));
         node *ptr=head;
         if(head==NULL)
    {
        temp->data=x;
        temp->prev=NULL;
        temp->next=NULL;
         head=temp;
    }
    else
    {
        while(ptr->next!=NULL)
        {

            ptr=ptr->next;
        }
        temp->data=x;
        ptr->next=temp;
        temp->prev=ptr;
        temp->next=NULL;

    }
    cout<<"\n node inserted\n";
}
void  Insert_pos(int x,int pos)
{
     node *temp=(struct node*)malloc(sizeof(struct node));
         node *ptr=head;
         for(int i=0;i<pos-1;i++)
         {
            ptr=ptr->next;
             if(ptr==NULL)
             {
                 cout<<"no such position in list\n";
                 return;
             }
        }
        temp->data=x;
        temp->next=ptr->next;
        temp->prev=ptr;
        ptr->next=temp;
        ptr->next->prev=temp;
        cout<<"node inserted at position: "<<pos<<endl;

}
void Delete_beginning()
{
    if(head==NULL)
    {
        cout<<"list is empty!!\n";
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        cout<<"node deleted.\n";
    }
    else
    {
        node *ptr=head;
        head=head->next;
        head->prev=NULL;
        free(ptr);
        cout<<"node deleted.\n";

    }
}
void Delete_end()
{
    struct node* temp=head;
       if(head==NULL)
    {
        cout<<"list is empty!!\n";
    }
    else if(head->next==NULL)
    {
        head=NULL;
        free(head);
        cout<<"node deleted.\n";
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->prev->next=NULL;
        free(temp);
          cout<<"node deleted.\n";

    }

}
void Delete_pos(int pos)
{
     struct node* temp=head;
     node *position;
      if(head==NULL)
    {
        cout<<"list is empty!!\n";
        return;
    }
  else
  {
      if(pos==1)
      {

          Delete_beginning();
          if(head!=NULL)
          {
              head->prev=NULL;
          }
          free(position);

      }
      else{
      int i=1;
      while(i<pos-1)
      {
          temp=temp->next;
          i++;
      }
       position=temp->next;
       if(position->next!=NULL)
          position->next->prev=temp;
        temp->next=position->next;
        free(temp);
        cout<<"node deleted.\n";}
  }
}
void Search(int key)
{
    node *ptr=head;
    int flag=0,i=0;
    if(ptr==NULL)
    {
        cout<<"list is empty!!\n";
    }
    else
    {  while(ptr!=NULL)
    {
        if(ptr->data==key)
        {
            flag=1;
            cout<<"node found at location: "<<i+1<<endl;
            break;
        }
        else
        {
            flag=0;
        }
        i++;
        ptr=ptr->next;
    }
    }
    if(flag==0)
        cout<<"data not found.\n";
}
void display()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
cout<<endl;
}

int main()
{
    int ch=0,data,pos,key;
    cout<<"\t\t\tM E N U \n";
    cout<<"\t1.Insert at begining\n\t2.Insert at end\n\t3.Insert at given position\n";
    cout<<"\t4.Delete at begining\n\t5.Delete at end\n\t6.Delete at specific position\n";
    cout<<"\t7.Search for an element\n\t8.Display list\n\t9.Exit\n";
    while(ch!=9)
    {
        cout<<"Enter your choice(0-9)\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter data:\n";
            cin>>data;
            Insert_beginning(data);
            break;
        case 2:
            cout<<"Enter data:\n";
            cin>>data;
            Insert_end(data);
            break;
      case 3:
            cout<<"enter data and position\n";
            cin>>data>>pos;
            Insert_pos(data,pos);
            break;
      case 4:
        Delete_beginning();
        break;
      case 5:
        Delete_end();
        break;
      case 6:
        cout<<"enter position to at which node is to be deleted\n";
        cin>>pos;
        Delete_pos(pos);
        break;
      case 7:
        cout<<"Enter a key to be deleted\n";
        cin>>key;
        Search(key);
        break;
      case 8:
        display();
        break;
        case 9:
            exit(0);
        default:
            cout<<"enter proper position\n";


        }

    }

    return 0;
}
