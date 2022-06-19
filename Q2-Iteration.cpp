/* GIVEN AN ALREADY SORTED ARRAY OF POSITIVE INTEGER, DESIGN A BINARY ALGORITHM AND IMPLEMENT IT USING A PROBLEM AND TO FIND WHETHER A KEY ELEMENT IS PRESENT IN ARRAY OR NOT. ALSO FIND THE NUMBEROF TOTAL COMPARISON FOR EACH INPUT CASE. */

//ITERATIVE

#include<iostream>
using namespace std;

void binary_search(int array[], int n, int target);
int main()
{
    cout<<endl<<endl<<endl<<endl;

    cout<<"AJAY GOSWAMI -->  F --> 20011502 "<<endl;
    cout<<"Question 2 using iterative"<<endl;
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
    binary_search(array, n, target);

    cout<<endl<<endl<<endl<<endl;
    return 0;
}

void binary_search(int array[], int n, int target)
{
    int low=0, high=n, mid,counter,count=0;
    while (1)
    {
        int mid = (low+high)/2;

        if(array[mid]==target)
        {
            count++;
            cout<<"Element found"<<endl;
            cout<<"Total number of comparision for finding an element is "<<count;
            counter++;
            break;
        }
        else if(array[mid]<target)
        {
            count++;
            low= mid+1;
        }
        else if(array[mid]>target)
        {
            count++;
            high= mid-1;
        }
    }
    if(counter==0)
        cout<<"Element is not found"<<endl;
    
}