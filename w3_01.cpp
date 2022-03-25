#include <iostream> 
using namespace std; // With the use of standard names library

int main()
{
    cout<<"Hello World! \n"; // cout<< to print 
                             // \n to end line
                             // \n\n to leave a blank line
}





#include <iostream> // Without using standard names library

int main()
{
    std::cout<<"Hello World!"<<std::endl;  // endl to end line (alternative to \n)
}



/*
Variable Types
int - 
stores integers (whole numbers), without decimals, such as 123 or -123
double - 
stores floating point numbers, with decimals, such as 19.99 or -19.99
char - 
stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - 
stores text, such as "Hello World". String values are surrounded by double quotes
bool - 
stores values with two states: true or false
*/



/*type VariableName = value ; 
type VariableName;*/



const int myNum = 15;
//myNum will always be 15
myNum = 10 
// error assignment of read-only variable myNum


cin>>x 
// Take user input

