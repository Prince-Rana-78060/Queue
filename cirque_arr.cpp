#include<iostream.h>
#include<conio.h>
#include<stdio.h>
# define X 5
class queue
{
  int arr[X];
  int front,rear;
  public:
 queue()
  {
   front=-1;
   rear=-1;
   }
  int isFull()
   {
    if(((rear+1)%X)==front)
     return 1;
     return 0;
    }
  int isEmpty()
   {
    if(front==-1 && rear==-1)
     return 1;
     return 0;
    }
  void enqueue(int a)
   {
    if(isEmpty())
      {
       front++;
       rear++;
       arr[rear]=a;
      }
     else if(isFull())
      {
	cout<<"queue is full"<<"\n";
       }
       else
	{
	rear=(rear+1)%X;
	arr[rear]=a;
      }
    }
     void dequeue()
      {
       if(isEmpty())
	{
	 cout<<"queue is empty"<<"\n";
	 }
       else if(front==rear)
	{
	  cout<<arr[front]<<"\n";
	  front=rear=-1;
	 }
	else
	 {
	  cout<<arr[front]<<"\n";
	   front=(front+1)%X;
	  }
	}
     int firstel()
	{
	 if(isEmpty())
	  {
	   cout<<"quene is empty"<<"\n";
	    return -1;
	   }
	  else
	   {
	    return arr[front];
	    }
	  }
     void clear()
	  {
	   front=rear=-1;
	   }
     void display()
	  {
	   int i;
	   i=front;
	   if(isEmpty())
	    {
	     cout<<"no element in quene"<<"\n";
	     }
	   else
	    {
	      while(i!=rear)
	     {
		cout<<arr[i]<<"\n";
		i=(i+1)%X;
	      }
	     }
	      cout<<arr[rear]<<"\n";
	    }
	  };
  void main()
   {
    clrscr();
    queue q;
    int ch,b;
    cout<<"\n 1.ENQUENE \n 2.DEQUENE \n 3.CLEAR \n 4.FIRSTEL \n 5.DISPLAY \n ";
      do
       {
	cout<<"enter the choice"<<"\n";
	cin>>ch;
	switch(ch)
       {
	case 1:cout<<" ENQUENE "<<"\n";
	       cout<<"enter the element to be entered ";
	       cin>>b;
	       q.enqueue(b);
	       break;
	case 2:cout<<" DEQUENE "<<"\n";
	       q.dequeue();
	       break;
	case 3:cout<<" CLEAR "<<"\n";
	       q.clear();
	       break;
	case 4:cout<<" FIRSTEL "<<"\n";
	       q.firstel();
	       break;
	case 5:cout<<" DISPLAY "<<"\n";
	       q.display();
	       break;
	default:cout<<"invalid choice"<<"\n";
       }
      }while(ch!=0);
       getch();
    }