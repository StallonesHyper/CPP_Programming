#include<iostream>

using namespace std;

int main()
{

    int n;
    int arr[100];
    int i;

    cout<<"Enter The Number Of Elements You Want In Your Array :";
    cin>>n;
    arr[n];

    cout<<"Enter The Elements Of The Array:\n";

    for(i=0;i<n;i++)
    {
        cout<<"Element "<<i<<" :";
        cin>>arr[i];
    }

    cout<<"The Reverese Of Array Is :"<<endl;
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }



    return 0;



}