#include <iostream>
using namespace std;
int main() 
{
   int y;
   cout<<"Enter a number between 0 to 39: ";
   cin>>y;

   if(y/10==0)
   {
     cout<<"you have entered the number in the range of 0 to 9\n";
   }
   else if(y/10==1)
   {
     cout<<"you have entered the number in the range of 10 to 19\n";
   }
   else if (y/10==2)
   {
     cout<<"you have entered number in the range of 20-29\n";
   }
   else if (y/10==3)
   {
     cout<<"you have entered number in the range of 30-39\n";
   }  
   else 
   {
     cout<<"number not in range \n";
   }
   return 0;
}








