/*WAP to illustrate how the constructors are implemented and the order in which they are called when the classes are inherited. 
Use three classes named alpha, beta, gamma such that alpha, beta are base class and gamma is derived class inheriting alpha &beta. 
Pass four variable to gamma class object which will further send one integer variable to alpha(),one double type variable to beta().
Show the order of execution by invoking constructor of derived class. */

#include <iostream>

using namespace std;

class alpha
{
private:
    int A;

public:
    alpha(int a)
    {
        A = a;
    }

    void shouwInputAl()
    {
        cout << "The Value Of A Is : " << A;
        cout << "\n";
    }
};

class beta
{
public:
    int B;
    beta(int l)
    {
        B = l;
    }

    void shouwInputBe()
    {
        cout << "The Value Of B Is : " << B;
        cout << "\n";
    }
};

class gamma : public alpha, public beta
{
public:
    double C;
    gamma(int p, double q, int r, int s) : alpha(p), beta(q)
    {
        C = p + q + r + s;
    }

    void showInputGa()
    {
        cout << "The Value Of C Is : " << C;
        cout << "\n";
    }
};

int main()
{
    gamma g(10, 10.5, 10, 10);
    g.shouwInputAl();
    g.shouwInputBe();
    g.showInputGa();

    return 0;
}
