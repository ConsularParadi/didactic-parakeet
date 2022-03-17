#include <iostream>

using namespace std;

void swap1(int, int);
void referencing(int &, int &);
void pointer_method(int *, int *);

int main()
{
	int a = 10, b = -40;
	
	cout<<"Before calling the function: "<<endl;
	cout<<"a = "<< a << " and b = " << b << endl;
	swap1(a,b);
	cout<<"After calling the function swap1: "<<endl;
	cout<<"a = "<< a << " and b = " << b << endl;
	referencing(a,b);
	cout<<"After calling the function referencing: "<<endl;
	cout<<"a = "<< a << " and b = " << b << endl;
	pointer_method(&a , &b);
	cout<<"After calling the function pointer method: "<<endl;
	cout<<"a = "<< a << " and b = " << b << endl;
	
}

void swap1(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	return;
}

void referencing (int &a, int &b) //Referencing Method
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return;
} 

void pointer_method (int *x, int *y) //Pointer Method
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}
