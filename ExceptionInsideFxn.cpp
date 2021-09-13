#include <iostream>
#include <string>
using namespace std;
class employee
{
public:
    string name, des;
    int age;
    double sal;
    void inp()
    {
        cout << "Enter Name of Employee:";
        cin >> name;
        cout << "Enter Designation of Employee:";
        cin >> des;
        cout << "Enter Salary of Employee:";
        cin >> sal;
        cout << "Enter Age of Employee:";
        cin >> age;
    }
};
int main()
{
    employee ob[4];
    ob[0].inp();
    cout << "Name of Employee:" << ob[1].name << endl;
    cout << "Designation of Employee:" << ob[2].des << endl;
    cout << "Salary of Employee:" << ob[3].sal << endl;
    cout << "Age of Employee:" << ob[4].age << endl;

    cout << "Rishi Verma, 20BCS5503, Group 5";
    return 0;
}