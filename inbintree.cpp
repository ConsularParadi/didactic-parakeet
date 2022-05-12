#include <iostream>
using namespace std;

int main()
{
    cout << "Enter no. of nodes in tree"<< endl;
    int count, i;
    cin >> count;
    int *tree = new int[count+1];
    int flag [sizeof(tree)] = {0}; // status indicates whether element has already been inserted in tree

    for(i = 1; i < (count+1)/2; i++)
    {   
        if (tree[i] == -99 && status[i] == 1)
        {
            continue;
        }
        cout<< "If node is empty, input -99" << endl;
        cout << "Enter parent node: " << endl;
        cin >> tree[i];
        if (tree[i] == -99)
        {
            continue;
        }
        cout << "Enter left child node: " << endl;
        cin >> tree[2*i];
        cout << "Enter left child node: " << endl;
        cin >> tree[i];
        flag[i] = 1;
        flag[2*i] = 1;
        flag[2*i+1] = 1;
    }
return 0;
}