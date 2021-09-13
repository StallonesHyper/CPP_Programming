#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;

    cout << "Enter The Value Of X: ";
    cin >> x;
    cout << "Enter The Value Of Y: ";
    cin >> y;
    try
    {
        try
        {
            if (y == 0)
            {
                throw 0;
            }

            else
            {
                double n = x / y;
                throw n;
            }
        }
        catch (int m)
        {
            cerr << "Dont Try To Divide The Number By 0 \n";
            throw;
        }

        catch (double n)
        {
            cout << "The Output For X/Y Is = " << n << "\n";
        }
    }
    catch (int m)
    {
        cout << "Checked";
    }
    return 0;
}
