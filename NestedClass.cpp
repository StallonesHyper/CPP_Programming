/*
Create 2 classes A and B .B is the nested class of A.X is the atribute of 
A and Y is the atribute of B.Take user Input for X ,Y and then display 
the values on screen.
*/






#include<iostream>

using namespace std;

class A{

    public:

    int X=100;
    void showX()
    {
        cout<<"The Value Of X Is :"<<X<<"\n";
    }




    class B{
        public:

        int Y=200;

        void showY()
        {
            cout<<"The Value Of Y Is :"<<Y<<"\n";
        }

        
    };
};


int main()
{
    A a;
    A::B b;

    a.showX();
    b.showY();


    return 0;
}

