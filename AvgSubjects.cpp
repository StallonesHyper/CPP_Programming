//Write A Program To Find The Average MArks Of Five Subjects In A Class


#include<iostream>
using namespace std;

int main()
{
    int nSubs;
    int i;
    float marks;
    float total=0.0f;
    float avgMarks;
    float percentage;
    cout << "Enter No. Of Subjects :";
    cin >> nSubs;
    cout << "Enter The Marks Of Each Subject:"<<endl;
    for (i = 1; i <=nSubs; i++)
    {
        cout<< "Subject "<< i <<":  ";
        
        cin >> marks;
        total += marks;
    }

    avgMarks = total/nSubs;
    cout<< "The Average Of The "<< nSubs << " Subjects Is : "<< avgMarks;
    return 0;
}