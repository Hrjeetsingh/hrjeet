#include <iostream>
using namespace std;

int main()
{

    int i, j, k;
    for (i = 1; i <= 7; i++)
    {
        k = i;
        for (j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 7)
            {
                cout << k<<" ";
                k++;
                
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
//its reverse lower portion of this pattern