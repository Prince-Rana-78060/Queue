#include<iostream>
using namespace std;
int arr[25], size, top=-1;

    void push(int x)
    {
        if(top>=size-1)
            cout<<"\nOverflow";
        else
            {
                arr[++top]=x;
            }
    }

    void pop()
    {
        if(top<=-1)
            cout<<"\nUnderflow";
        else
            {
                cout<<arr[top]<<" popped\n";
                top--;
            }
    }

    void display()
    {
        if(top>=0)
            {
                cout<<"\nElements are :";
                for(int i=top; i>=0; i--)
                {
                    cout<<arr[i]<<" ";
                }
            }
        else
            cout<<"\nStack is empty";
    }


int main()
{
    int n,a;
    char ch;
    cout<<"\nEnter the Size of stack :";
    cin>>size;
    cout<<"1) Push "<<endl;
    cout<<"2) Pop "<<endl;
    cout<<"3) Display "<<endl;
    do
        {
            cout<<"\nEnter choice: ";
            cin>>ch;
            switch(n)
            {
                case 1:
                    cout<<"\nEnter value to be entered in stack ";
                    cin>>a;
                    push(a);
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    display();
                    break;
              //  default:
                //    cout<<"\nInvalid Choice";
                 //   break;
            }
        cout<<"\nWant to continue(y/n)? ";
        cin>>ch;
        }while(ch=='y'||ch=='Y');
   return 0;
}
