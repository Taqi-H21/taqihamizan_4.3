#include <iostream>
using namespace std;

int main()
{
    int n, m, i;
    cout << "input : ";
    cin >> i;
    for (n = 0; n < i; n++)
    {
        for (m = 0; m <= n; m++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}
