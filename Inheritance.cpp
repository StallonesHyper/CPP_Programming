#include <iostream>

using namespace std;

//Parent Class
class Parent
{
public:
    int aParent;
};

// Child Class
class Child : public Parent
{
public:
    int aChild;
};

int main()
{
    Parent x;
    Child y;

    x.aParent = 10;
    y.aChild = 100;

    cout << x.aParent << "\n";
    cout << y.aChild << "\n";

    return 0;
}
