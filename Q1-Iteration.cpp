/* GIVEN AN ARRAY OF NON-NEGATIVE INTEGER, DESIGN A LINEAR ALGORITHM AND IMPLEMENT IT USING A PROBLEM AND TO FIND WHETHER A KEY ELEMENT IS PRESENT IN ARRAY OR NOT. ALSO FIND THE NUMBEROF TOTAL COMPARISON FOR EACH INPUT CASE. */

// iterative approach

#include <iostream>
using namespace std;

void searchTarget(int arr[], int n , int target);
int main()
{
    cout<<endl<<endl<<endl<<endl;
    cout<<"AJAY GOSWAMI -->  F --> 20011502 "<<endl;
    cout<<"Question 1 using iterative"<<endl;
    int n=0,target;
    cout<<"Enter the number of element you want to insert in an array ";
    cin>> n;
    int array[n];
    cout<<"Enter elements :"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    cout<<endl<<"Enter the element you want to search in an array ";
    cin>>target;
    searchTarget(array, n, target);

    cout<<endl<<endl<<endl<<endl; 
    return 0;
}

void searchTarget(int arr[] , int n, int search)
{
    int x=0,count=0;
    for (int i=0; i<n ; i++)
    {
        count++;
        if(arr[i]==search )
        {
            cout<<"Element is found in "<<i<<" th position"<<endl;
            cout<<"Total number of comparision for finding an element is "<<count;
            x=1;
        }
    }
    if(x!=1)
    {
        cout<<"Element is not found "<<endl;
    }
}