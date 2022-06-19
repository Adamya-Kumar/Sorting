/* Q8. Given an unsorted array of integers, design an algorithm and program to sort an array using selection sort. Your program should be able to find the number of comparision and number of swapping required.  */

#include<iostream>
using namespace std;
int main()
{
    cout<<"AJAY GOSWAMI --> F --> 20011502"<<endl;
    cout<<"Question 8"<<endl;
	int n,swap=0,comparision=0;
	
	cout<<"Enter the number of elements you want to insert in an array:"<<"\n";
	cin>>n;
	cout<<"Enter Elements::"<<"\n";
	int array[n];
	for(int i=0; i<n; i++)
	cin>>array[i];

	int min,temp;
	for(int i=00; i<n-1; i++)
	{
		min=i;
		for(int j=i+1; j<n; j++)
		{
			comparision++;
			if(array[j]<array[min])
			{
				min=j;
			}
		}
		temp=array[i];
		array[i]=array[min];
		array[min]=temp;
		swap++;
	}
	for(int i=0; i<n; i++)
	cout<<array[i]<<"  "<<"\n";
	cout<<"Number of comparision ="<<comparision<<endl;
	cout<<"Number of swaps ="<<swap<<endl;
}

