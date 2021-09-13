// •
// Create a class child  having student uid and getnumber(),putnumber() as 
// member functons to get the values and display it.
// •
// Derive a class exam having marks in diferent subjects and getmarks() 
// and putmarks() as member functons to get and display the values. 
// •
// Derive another class game from child class having sports score and 
// getscore(), putscore() as member functons to get and display the values. 
// •
// Derive a class result from exam and game  class and defne a functon 
// display() to calculate total marks. 
// •
// Implement it with the object of result class. If it gives any error, resolve it 
// by adding the required functonality. 
// •

#include<iostream>

using namespace std;

//Base Class

class Child{

    public:
    string Student;
    string UID;

    void getnumber(){
        cout<<"Enter Your Name :";
        cin>>Student;
        cout<<"Enter Your UID :";
        cin>>UID;
    }
    void putnumber(){
        cout<<"Your Name Is :"<<Student<<"\n";
        cout<<"Your UID Is :"<<UID<<"\n";
    }
};

//Exam Derived From Child

class Exam : virtual public Child{

    public:
    int S1;
    int S2;
    int S3;

    void getmarks(){
        cout<<"\n";
        cout<<"Enter The Marks Of S1 :";
        cin>>S1;
        cout<<"Enter The Marks Of S2 :";
        cin>>S2;
        cout<<"Enter The Marks Of S3 :";
        cin>>S3;
    }

    void putmarks(){

        cout<<"The Marks OF S1 Are: "<<S1<<"\n";
        cout<<"The Marks OF S2 Are: "<<S2<<"\n";
        cout<<"The Marks OF S3 Are: "<<S3<<"\n";

    }
};

//game Derived From Child 

class Game : virtual public Child{

    public:
    int SportsScore;

    void getScore(){
        cout<<"Enter The Sports Score Accquired : ";
        cin>>SportsScore;
    }

    void putScore(){
        cout<<"The Score Accquired In Sports Is : "<<SportsScore<<"\n";
    }
};

//Result Derived From Exam And Game

class Result : public Exam , public Game {

    public:
    void display(){
        cout<<"The Total Marks Obtained Are : "<<S1+S2+S3+SportsScore<<"\n";
    }
};

int main(){

    Result Candidate;

    Candidate.getnumber();
    Candidate.putnumber();
    Candidate.getmarks();
    Candidate.putmarks();
    Candidate.getScore();
    Candidate.putScore();
    Candidate.display();


    //Ambiguity Error Fixed By Using Virtual Keyword In Class Definition

    return 0;
}