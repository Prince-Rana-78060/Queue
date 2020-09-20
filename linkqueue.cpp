#include <iostream>
using namespace std;

struct node
{
   int data;
   node *next;
};
node *front = NULL;
node *rear = NULL;
node *head;

void enqueue(int x)
{
   if(rear==NULL)
    {
      rear->data=x;
      front=rear;
   }
   else
    {
      rear->next=head;
      head->data=x;
      head->next=NULL;
      rear=head;
   }
}
void dequeue()
{
   if (front==NULL)
    {
      cout<<"\nUnderflow";
    }
   else if(head==rear)
    {
      cout<<front->data<<" Deleted\n";
      front=NULL;
      rear=NULL;
    }
   else
    {
        head=head->next;
        cout<<front->data<<" Deleted\n";
        delete front;
        front=head;
    }
}

void Display()
{
   head=front;
   if(front==NULL && rear==NULL)
    {
      cout<<"\nQueue is empty";
   }
   cout<<"\nElements are: ";
   while (head!=NULL)
   {
      cout<<head->data<<" ";
      head=head->next;
   }
}

int main()
{
   int n,a;
   char ch;
   cout<<"1) Enqueue"<<endl;
   cout<<"2) Dequeue"<<endl;
   cout<<"3) Display"<<endl;
   do
    {
      cout<<"\nEnter your choice:"<<endl;
      cin>>ch;
      switch (ch)
      {
         case 1:
             cout<<"\nEnter value to be entered in queue : "<<endl;
             cin>>a;
             enqueue(a);
             break;
         case 2:
             dequeue();
             break;
         case 3:
             Display();
             break;
         default:
             cout<<"\nInvalid choice";
      }
      cout<<"\n Do you want to continue(y/n)? ";
      cin>>ch;
   } while(ch=='y'||ch=='Y');
   return 0;
}
