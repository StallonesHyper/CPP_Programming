#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter The Size Of The Array :";
    cin >> n;

    int *arr = new int(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i << ":";
        cin >> arr[i];
    }

    cout << "The Array Is :\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    delete[] arr;
    return 0;
}
