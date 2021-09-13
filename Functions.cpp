#include<iostream>

using namespace std;


int max(int x, int y)
{
    if (x>y)
    {
        return x;
    }

    else if (y>x)
    {
        return y;
    }

    else
    {
        return 0;
    }

}


int main()
{
    int a=10;
    int b=20;

    cout<<"Check The Maximum Of Two Numbers:\n";
    cout<<"The Max Number Is : "<<max(a,b)<<endl;//Call By Name:

    cout<<"Return The Value Of Address Of A :";

}




