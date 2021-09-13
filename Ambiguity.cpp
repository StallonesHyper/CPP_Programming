// NOTE: There Are Two Ways To Fix Ambiguity:
//1. ObjectName.ClassName::Attribute = Value
//2. Using Virtual Keyword In BAse Class Inheritance
// class B:virtual public class A
// class C:virtual public class A

#include <iostream>
using namespace std;

class A
{
public:
    int x;
};

class B : virtual public A
{
public:
    int a;
};

class C : virtual public A
{
public:
    int b;
};

class D : public B, public C
{
public:
    int c;
};

int main()
{
    D x;
    x.a = 100;
    x.b = 200;
    x.c = 300;
    x.x = 400;

    int sum = x.a + x.b + x.c + x.x;
    cout << "The Sum Is : " << sum;

    return 0;
}