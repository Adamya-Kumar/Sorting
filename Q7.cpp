/* Q7. Given an unsorted array of integers, design an algorithm and program to sort an array using insertion sort. Your program should be able to find the number of comparision or shift through its place.  */

#include<iostream>
using namespace std;

int main()
{
    cout<<"AJAY GOSWAMI --> F --> 20011502"<<endl;
    cout<<"Question 7"<<endl;
	int n,shift,comparision;
	    
	    cout<<"Enter the number of elements you want to insert in an array :"<<"\n";
		cin>>n;
		cout<<"Enter Elements::"<<"\n";
		int array[n];
		for(int i=0; i<n; i++)
		cin>>array[i];
		int temp,j;
		for(int i=1; i<n; i++)
		{
			temp=array[i];
			j=i;
			while(array[j-1]>temp && j>=1)
			{
				shift++;
				comparision++;
				array[j]=array[j-1];
				j--;
			}
			shift++;
			array[j]=temp;
		}
		for(int i=0; i<n; i++)
		cout<<array[i]<<"   ";
		cout<<"\n";
		cout<<"Number of comparision ="<<comparision<<endl;
		cout<<"Number of shifts ="<<shift<<endl;
	return 0;
}