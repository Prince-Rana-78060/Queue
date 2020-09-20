
#include <iostream>
using namespace std;

struct node
{
   int data;
   node *next;
};
node *top=NULL;

void push(int x)
{
   node* head=new node;
   head->data=x;
   head->next=top;
   top=head;
}
void pop()
{
   if(top==NULL)
   cout<<"\nUnderflow";
   else
   {
      cout<<"Popped "<< top->data<<endl;
      top=top->next;
   }
}

void display()
{
   node *head;
   if(top==NULL)
   cout<<"\n..Stack is empty..";
   else
    {
      head=top;
      cout<<"\nElements are: ";
      while (head!=NULL)
      {
         cout<<head->data<<" ";
         head=head->next;
      }
   }
   cout<<endl;
}

int main()
{
   int n, a;
   char ch;
   cout<<"1) Push"<<endl;
   cout<<"2) Pop"<<endl;
   cout<<"3) Display"<<endl;
   do
    {
      cout<<"\nEnter choice: ";
      cin>>n;
      switch(n)
      {
         case 1:
            cout<<"\nEnter your data: ";
            cin>>a;
            push(a);
            break;
         case 2:
            pop();
            break;
         case 3:
            display();
            break;
         default:
            cout<<"\nInvalid Choice"<<endl;
         }
         cout<<"\nWant to continue(Y/N)? ";
         cin>>ch;
   }while(ch=='y'||ch=='Y');
   return 0;
}
