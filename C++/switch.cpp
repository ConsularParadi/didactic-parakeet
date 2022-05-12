#include<iostream>
using namespace std; 
int main()
{
   int x, y;
   cout<<"Enter a number between 0 to 39: ";
   cin>>y;
   x=y/10;
   switch(x) 
   {
     case 0: 
     cout<<"you have entered the number in the range of 0 to 9\n";
     break;
     case 1: 
     cout<<"you have entered the number in the range of 10 to 19\n";
     break;
     case 2:
     cout<<"you have entered number in the range of 20-29\n";
     break;
     case 3:
     cout<<"you have entered number in the range of 30-39\n";
     break;
     default:
     cout<<"number not in range \n";
   } 
   return 0;
}
