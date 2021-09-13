#include <iostream>
using namespace std;
class A
{
public:
    void funct()
    {
        cout << "Function Of A ";
    }
};
class B : public A
{
public:
    void funct()
    {
        A::funct();

        cout << "Function Of B";
    }
};
int main(void)
{
    B d = B();
    d.funct();

    return 0;
}

//This Is An Example Of Function OR
