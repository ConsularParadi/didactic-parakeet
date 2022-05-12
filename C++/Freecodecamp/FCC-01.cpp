#include <iostream>

using namespace std;

int main()
{
     int arr[] = {24, 45, 64, 50};

    int* p = arr;

    cout<<*(p)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
return 0;
}