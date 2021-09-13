#include <iostream>
using namespace std;
class employee
{
public:
    string Name;
    string des;
    int Age;
    double sal;
    void Inp()
    {
        cout << "Enter Employee Name : ";
        cin >> Name;
        cout << "Enter Employee Designation : ";
        cin >> des;
        cout << "Enter Employee Age : ";
        cin >> Age;
        cout << "Enter Employee Salary: ";
        cin >> sal;
    }

    void out()
    {
        cout << "The Employee Name Is : " << Name << "\n";
        cout << "Employee Designation : " << des << "\n";
        cout << "Age:" << Age << "\n";
        cout << "Employee Salary: " << sal << "\n";
    }
};
int main()
{
    employee x;

    cout << "Enter The Details Of" << endl;
    x.Inp();
    x.out();
    cout << "\n";
    return 0;
}