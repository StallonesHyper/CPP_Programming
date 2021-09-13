#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter The Number :";
    cin >> a;
    
    if (a%2 == 0)
    {
        cout<< a << " Is An Even Number";
    }

    else
    {
        cout<< a << " Is Odd";
    }

    return 0;
}