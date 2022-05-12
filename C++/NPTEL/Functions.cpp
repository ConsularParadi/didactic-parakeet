//Functions
#include <iostream>
using namespace std;
char add(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    char sum = add(90, 9);
    cout << sum << endl;
}