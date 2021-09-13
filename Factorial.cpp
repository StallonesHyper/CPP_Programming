#include <iostream>
using namespace std;

int main()
{
    int a;
    int fact = 1;
    int j;


    cout << "Enter Number: ";
    cin >> a;

        for(int i = 1; i <=a; i++) 
        {
            fact *= i;
        }
        cout <<"The Factorial Of "<< a << "=" << fact;    

        j=a;
        while(a)
         {
           fact=fact*a;
           a--;
         }

    cout <<"The Factorial Of "<<j<<" Is "<<fact<< endl;


    return 0;
}


