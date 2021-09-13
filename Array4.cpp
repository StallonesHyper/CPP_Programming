#include<iostream>

using namespace std;

int main()
{

    int n;
    int arr1[100];
    int arr2[100];
    int i;

    cout<<"Enter The Size Of Array :";
    cin>>n;
    arr1[n];

    cout<<"Enter The Elements Of The Array:\n";

    for(i=1;i<=n;i++)
    {
        cout<<"Element "<<i<<" :";
        cin>>arr1[i];
    }

    for (i=1;i<=n;i++)
    {
        arr2[i]=arr1[i];
    }

    cout<<"The Entered Array Is :"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<arr1[i]<<" ";
    }

    cout<<"\n";

    cout<<"The Copied Array Is :"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<arr2[i]<<" ";
    }



    return 0;



}