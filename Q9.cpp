/* Q9. Given an unsorted array of positive integers design an algorithm and implement it using a program to find whether there are any duplicate elements in the array or not.  */

#include<iostream>
using namespace std;
void checkDuplicates(int arr[], int size)
{
    int duplicate_exist = 0;
 
    int i,j;
    for(i = 0; i<size; i++)
    {
        for(j = i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate_exist = 1;
                cout<<"Yes";
                break;
            }
        }
    }
    if(duplicate_exist ==0)
        cout<<"No";
}
int main()
{
    cout<<"AJAY GOSWAMI --> F --> 20011502"<<endl;
    cout<<"Question 9"<<endl;
	int n;
    cout<<"Enter the number of elements you want to insert in an array:"<<"\n";
	cin>>n;
	cout<<"Enter Elements::"<<"\n";
	int array[n];
	for(int i=0; i<n; i++)
	cin>>array[i];
    checkDuplicates(array,n);
}

