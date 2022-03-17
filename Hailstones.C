#include <iostream>
using namespace std;
int printHailstones(int); // function declaration
int main()
{
printHailstones(19);
return 1;
}
int printHailstones(int v)
{
  int no_terms = 0;
    while (v > 1)
    {	
    	cout<< v << ", ";
	if (v%2 == 0)
	v/=2;	
	else
	v = 3*v + 1;
no_terms++;
     }
     cout << 1 << endl;
     return no_terms;
     	
}
