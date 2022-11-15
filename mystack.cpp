#include<iostream>
using namespace std;

class stack
{
    int top,data,i,a[];
    public:
        stack(int size)
        {
            int a[size];
            top=-1;
        }
        
        void push(int data)
        {
        	if(top==-1)
        	{
        		top=0;
        		a[top]=data;
			}
			else
			{
				top++;
				a[top]=data;
			}
		}
		void pop()
		{
			if(top==0)
			{
				data=a[top];
				top=-1;
				cout<<"\nPopped element:"<<data;
				cout<<"\nStack is now empty";
			}
			else if(top==-1)
			{
				cout<<"\nStack is empty!";
			}
			else
			{
			    data=a[top];
				top=-1;
				cout<<"\nPopped element:"<<data;
				cout<<"\nStack is now empty";
			}
		}
		void display()
		{
		    if(top!=-1)
		    {
			cout<<"Current Stack:";
			for(i=0;i<=top;i++)
			{
			    cout<<a[i]<<" ";
			}
		    }
		    else
		    {
		        cout<<"Stack is empty";
		    }
		}
};

void menu()
{
	cout<<"\n***************Menu***************\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
}

int main()
{
	int size,choice,data;
	bool loop=true;
	cout<<"Enter size of stack:";
	cin>>size;
	stack s(size);
	menu();
	while(loop)
	{
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter data:";
				cin>>data;
				s.push(data);
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.display();
				break;
			case 4:
				cout<<"Thank you for using this program!";
				loop=false;
				break;
			default:
				cout<<"Please enter a valid choice";
		}
	}
}
