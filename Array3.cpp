#include<iostream>

using namespace std;

int main()
{

    int n;
    int arr[100];
    int i;
    int sumof = 0;

    cout<<"Enter The Number Of Elements You Want In Your Array :";
    cin>>n;
    arr[n];

    cout<<"Enter The Elements Of The Array:\n";

    for(i=1;i<=n;i++)
    {
        cout<<"Element "<<i<<" :";
        cin>>arr[i];
    }

    cout<<"The Entered Array Is :"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" \n";
    }



    cout<<"The Sum Of The Array Is :";
    for(i=1;i<=n;i++)
    {
        sumof +=arr[i];
    }

    cout<<sumof;



    return 0;



}