#include <iostream>
using namespace std;

int ar[25],size,front= - 1,rear = - 1;
void enqueue(int x)
{
   if (rear==size-1)
   cout<<"\nOverflow"<<endl;
   else
    {
      if (front==-1)
      front=0;
      rear++;
      ar[rear]=x;
   }
}
void Dequeue() {
   if (front==-1||front>rear)
    {
      cout<<"\nUnderflow ";
      return ;
   }
   else
   {
      cout<<ar[front]<<" deleted\n";
      front++;;
   }
}
void Display()
{
   if (front==-1)
   cout<<"\nQueue is empty"<<endl;
   else
   {
      cout<<"\nElements are : ";
      for (int i=front;i<=rear;i++)
      cout<<ar[i]<<" ";
   }
}
int main()
{
   int n,a;
   char ch;
   cout<<"\nEnter Size of queue: ";
   cin>>size;
   cout<<"1) Enqueue"<<endl;
   cout<<"2) Dequeue"<<endl;
   cout<<"3) Display"<<endl;
   do {
      cout<<"\nEnter ur choice: ";
      cin>>n;
      switch (n)
      {
         case 1:
             cout<<"\nEnter value to be entered in queue: ";
             cin>>a;
             enqueue(a);
         break;
         case 2:
             Dequeue();
             break;
         case 3:
             Display();
             break;
         default:
             cout<<"\nInvalid choice";
             break;
      }
      cout<<"\nWant to continue(Y/N)?";
      cin>>ch;
   } while(ch=='y'||ch=='Y');
   return 0;
}
