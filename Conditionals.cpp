#include<iostream>

using namespace std;
 int main()
 { 
     int a = 10, b = 20;

     if(b>a)//Condition 1.
     {
        cout <<"A Is Greater Than B";
     }

     else if(b=a)//Condition 2.
     {
         cout <<"A And B Are Equal";
     }

     else//Condition 3.
     {
        cout<<"B Is Greater Than A";
     }
    return 0;  
 }