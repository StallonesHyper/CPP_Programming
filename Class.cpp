#include<iostream>

using namespace std;

class employee
{
    public://This Will Make The Class Public ANd MAke It Accessible To The Main Function.
    
    //There Are Three Differen Access Modifiers:
    // Public , Private And Protected
    
    string Name ;
    string Company;
    int Age;
    string Job_Profile;

    //These Are Called Attributes.


    void Introduction()
    {
        cout<<"Hello I Am "<< Name<<endl;
        cout<< "I Worked At "<< Company<<endl;
        cout<<"I Am "<<Age<< " Y/O"<<endl;
        cout<<"I Worked As A "<<Job_Profile<<endl;

    }

};

class Students{

    public:

    string Name;
    int Age;
    int ID;

    void SelfIntroduction();


};

void Students::SelfIntroduction()
{
    
    cout<<"Hello I'm "<<Name<<endl;
    cout<<"I'm "<<Age<<"Years Old"<<endl;
    cout<<"My ID Is : "<<ID<<endl;

}


int main()
{

    employee employee; //An Instance Of The Class Employee
    Students students; //An Instance Of The Class Students

    employee.Name = "Stallone";
    employee.Company = "Snapchat";
    employee.Age = 19;
    employee.Job_Profile = "Software Developer";

    employee.Introduction();//This Will Help In Introduction Of Candidate.

    employee.Name = "Starlon";
    employee.Company = "Facebook";
    employee.Age = 19;
    employee.Job_Profile = "Data Analyst";
    
    employee.Introduction();//This Will Help In Introduction Of Candidate.


    students.Name = "Stallone";
    students.Age = 19;
    students.ID = 5489;

    students.SelfIntroduction();



    return 0;
}