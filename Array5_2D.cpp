#include<iostream>

using namespace std;

int main()
{
    int i;
    int j;
    int n;
    int m;
    int arr[100][100];

    cout << "Enter The No Of Rows Of Your Array :";
    cin >> n;
    cout << "Enter The No Of Columns Of Your Array :";
    cin >> m;
    


    for(i = 0;i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "Element " <<"["<<i<<"]" <<"["<<j<<"]"<< ":";
            cin >>arr[i][j];
        }
    }

    cout<<"This Is Your Array\n";

     for(i = 0;i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            
            cout<<"Element["<<i<<"]"<<"["<<j<<"] :"<<arr[i][j]<<" \n";
        }
    }
    
    

    return 0;


}

 
