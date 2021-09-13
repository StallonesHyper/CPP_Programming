#include<iostream>
#include<string>


using namespace std;

int main()
{
    string name;

    cout << "Enter The Name :";

    getline(cin,name);//Taking String Input From The User.
    cout << name << endl;

    name.push_back('s');//Adding A Single Character At The End Of The String.
    cout << name << endl;

    name.pop_back();//Removing A Single Character At The End Of The String.
    cout << name << endl;

    cout<<name.capacity()<<endl;
    name.resize(3);//String SLicing In C++

    cout<<name<<endl;

    cout<<name.capacity()<<endl;//Capacity Allocated To The String 

    cout<<name.length()<<endl;//Length Of The String 






    

    










    return 0;


}