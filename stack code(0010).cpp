#include <iostream>
using namespace std;
#define StackSize 5
class stack
{
	private: 
	int arr[StackSize];
	int top;
	
	public:
		stack();
		void push(int x);
		void pop();
		bool is_empty();
		bool is_full();
		void display();
};

stack::stack()
{
	top=-1;
}
void stack::push(int x)
{
	if (!is_full())
	{
		arr[++top]=x;
		cout<<"Value has entered successfuly "<<endl;
	}
	else
	cout<<"Stack is full, Can not push "<<x<<endl;
}

void stack::pop()
{
	if(!is_empty())
	{
		cout<<arr[top]<<endl;
		top--;
	}
	else
	cout<<"Stack is Empty, Can not pop"<<endl;
}

bool stack::is_empty()
{
	if(top==-1)
	return true;
	else
	return false;
}

bool stack::is_full()
{
	if(top==StackSize-1)
	return true;
	else
	return false;
}
/*void stack::display() 
  / {
     if (top == 0) { cout << "(empty)\n";  return; }
     for (int t=0 ; t <= top ; t++) cout << arr[t] << " ";
     cout << "\n";
   }*/

int main()
{
	stack e;
	e.push(12);
	e.push(31); 
	e.push(54);
	e.push(34);
	e.push(90);
	
	e.push(70);
	e.push(53);
	e.push(100);
//	e.display();
	e.pop();
	e.pop();
	e.pop();
	//e.display();
	e.pop();
	e.pop();
	e.pop();
	e.pop();
}


