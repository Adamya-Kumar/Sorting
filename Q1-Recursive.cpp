/* GIVEN AN ARRAY OF NON-NEGATIVE INTEGER, DESIGN A LINEAR ALGORITHM AND IMPLEMENT IT USING A PROBLEM AND TO FIND WHETHER A KEY ELEMENT IS PRESENT IN ARRAY OR NOT. ALSO FIND THE NUMBEROF TOTAL COMPARISON FOR EACH INPUT CASE. */

// recursive approach

#include <iostream>
using namespace std;

void searchTarget(int arr[],int j, int n, int count , int target);
int main()
{
    cout<<endl<<endl<<endl<<endl;

    cout<<"AJAY GOSWAMI -->  F --> 20011502 "<<endl;
    cout<<"Question 1 using recursive"<<endl;
    int n=0,target,count=1;
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
    searchTarget(array, 0, n,count, target);

    cout<<endl<<endl<<endl<<endl;
    return 0;
}

void searchTarget(int arr[] ,int j, int n, int count, int search)
{
    if(arr[j]==search )
    {
        cout<<"Element is found in "<<j+1<<" th position"<<endl;
        cout<<"Total number of comparision for finding an element is "<<count;
    }
    else if(j==n)
    {
        cout<<"Element is not found "<<endl;
        cout<<"Total number of comparision for finding an element is "<<count;
    }
    else
    {
        searchTarget(arr, ++j, n, ++count, search);
    }
}