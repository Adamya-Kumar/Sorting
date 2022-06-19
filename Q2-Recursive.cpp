/* GIVEN AN ALREADY SORTED ARRAY OF POSITIVE INTEGER, DESIGN A BINARY ALGORITHM AND IMPLEMENT IT USING A PROBLEM AND TO FIND WHETHER A KEY ELEMENT IS PRESENT IN ARRAY OR NOT. ALSO FIND THE NUMBEROF TOTAL COMPARISON FOR EACH INPUT CASE. */

//RECURSIVE

#include<iostream>
using namespace std;

void binary_search(int array[], int low, int mid, int high, int target);
int main()
{
    cout<<endl<<endl<<endl<<endl;
    cout<<"AJAY GOSWAMI -->  F --> 20011502 "<<endl;
    cout<<"Question 2 using recursive"<<endl;
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
    int low=0, high=n, mid;
    binary_search(array, low, mid, n, target);

    cout<<endl<<endl<<endl<<endl;
    return 0;
}

void binary_search(int array[], int low, int mid, int high, int target)
{
    if (low>high)
    {
        cout<<"Element not found"<<endl;
        return;
    }
    else if(array[mid]==target)
    {
        cout<<"Element found "<<endl;
        return;
    }
    else if(array[mid]>target)
    {
        high = mid-1;
    }
    else if(array[mid]<target)
    {
        low = mid+1;
    }
    mid=(low+high)/2;
    binary_search(array,low,mid,high,target);
}