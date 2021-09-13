#include <iostream>
#include <string>
using namespace std;
// Base class
class A
{
public:
    void s()
    {
        cout << "hello evryone  \n";
    }
};
// Derived class
class B : public A
{
public:
    void s()
    {
        cout << "How are you \n";
    }
};
class C : public A
{
public:
    void s()
    {
        cout << "I am gud  \n";
    }
};
int main()
{
    // A a;
    B b;
    C c;
    // a.s();
    b.s();
    c.s();
    return 0;
}