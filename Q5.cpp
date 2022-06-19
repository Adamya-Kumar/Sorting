/* Given a sorted array of +ve integers, design an algorithm and implement using a program to find three indices i,j,k such that arr[i]+arr[j]=arr[k]  */

#include <iostream>
using namespace std;

// void check(int arr[], int n)
// {
//     int  k;
//     for(int i=0, k=i+2; i<n; i++,k++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if((arr[i]+arr[j])==arr[k])
//             cout<<"i= "<<i<<endl<<"j= "<<j<<endl<<"k= "<<k<<endl;
//         }
//     }
//     return;
// }
void check(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = i+2; k < n; k++)
            {
                if ((arr[i] + arr[j]) == arr[k])
                    cout<<arr[i]<< "+" <<arr[j] <<"=" <<arr[k]<< "\n";
            }
        }
    }
}

int main()
{
    cout<<endl<<endl<<endl<<endl;

    cout<<"AJAY GOSWAMI --> F --> 20011502"<<endl;
    cout<<"Question 5"<<endl;
    int n;
    cout << "Enter the element you want to insert in an array ";
    cin >> n;
    cout << "Enter elements " << endl;
    int arr[n];
    for (int x = 0; x < n; x++)
    {
        cin >> arr[x];
    }
    check(arr, n);

    cout<<endl<<endl<<endl<<endl;
    return 0;
}