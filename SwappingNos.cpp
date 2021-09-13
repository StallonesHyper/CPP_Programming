#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num, swappedNum;
    int firstDigit, lastDigit, digits;

    
    cout<<"Enter Any Number: ";
    cin>>num;

    
    lastDigit  = num % 10;

    
    digits     = (int)log10(num); 

    
    firstDigit = (int)(num / pow(10, digits)); 

    swappedNum  = lastDigit;
    swappedNum *= (int) pow(10, digits);
    swappedNum += num % ((int) pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    cout<<"Un-Swapped Number Entered = "<< num<<"\n";
    cout<<"Swapped Number Is = "<< swappedNum<<"\n";

    return 0;
}