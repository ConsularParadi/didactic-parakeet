#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {0,1,0,3,4,5,6,7};
    int i;
    for (i = 0; i< (sizeof(arr)/sizeof(arr[0]))/2; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        else{
        cout << arr[i] << " --> " << arr[2*i] << " " << arr[2*i +1]<< endl;
        }
    }
    return 0;
}