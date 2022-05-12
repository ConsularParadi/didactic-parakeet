#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int N = 10;
    char word[N] = "hello";
    char str2[] = "s" ;
if (strlen(word) + strlen(str2) <= N)
{
    cout << strcat(word, str2);
}
else
{
    cout << "Length limit exceeded";
}
}
