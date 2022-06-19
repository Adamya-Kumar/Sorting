/*GIVEN AN SORTED ARRAY OF POSITIVE INTEGRS, DESIGN AN ALGORITHM AND IMPLIMENT IT USING A PROGRAM TO FIND WHETHER A GIVEN KEY IS PRESENT IN AN ARRAY OR NOT FOR AN ARRAY ARR[N]. SEARCH THE INDICES OF AR[0], AR[2], AR[4], _ _ _ _ AR[2^K] AND SO ON. ONCE THE INTERVAL (ARR[2^K]<ITEM < AR[2^K+1]) IS FOUND, PERFORM A LINEAR SEARCH OPERATION FROM INDEX 2^K TO THE KEY ELEMENT,*/



#include<iostream>
#include<cmath>
using namespace std;

void searching (int array[], int n, int target);
int main()
{
    cout<<endl<<endl<<endl<<endl;
    cout<<"AJAY GOSWAMI -->  F --> 20011502 "<<endl;
    cout<<"Question 3 "<<endl;
    
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
    searching(array, n, target);

    cout<<endl<<endl<<endl<<endl;
    return 0;
}

void searching(int array[], int n, int target)
{
    int x;
    for(int i=0, j=0; i<n; i=(pow(2,j)),j++)
    {
        if(array[i]==target)
        {
            cout<<"Element is found"<<endl;
            return;
        }
        else if(array[i]<target)
        {
            x=i;
        }
        else if(array[i]>target)
        {
            for( x; x<array[i]; x++)
            {
                if(array[x]==target)
                {
                    cout<<"Element is found";
                    return;
                }
            }
        }       
    }
    cout<<"Not found";
}