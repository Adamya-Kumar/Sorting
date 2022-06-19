//Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and implement if using a program to find which alphabet has maximum number of occurances and print it. (Time Complexity = O(n) ) (Hint: Use counting sort).

#include<iostream>
#include<string.h>
using namespace std;
#define MAX 255


void countSort(char arr[])
{
	char output[strlen(arr)];

	int count[MAX + 1]={0};
	int i;
	
	for (i = 0; arr[i]; ++i)
		count[arr[i]]++;

    int maxElement =0,x;
    for (i = 1; i <= MAX; ++i)
        if(maxElement < count[i]){
            maxElement = count[i];
            x = i;
        }
            
    cout<<"Maximum occurances element is "<<(char)x<<" and its occurances is "<<maxElement<<endl;
}

int main()
{
	cout<<"AJAY GOSWAMI --> F --> 20011502"<<endl;
    cout<<"Question 13"<<endl;
	// char arr[] = "countsort";
	char arr[] = "GraphicEraHillUniversity";
	cout<<"String is "<<arr<<endl;

	countSort(arr);

	return 0;
}






// //2nd 
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	char val;
// 	cin>>n;
// 	char arr[n];
// 	for(int i=0;i<n;i++)
// 	cin>>arr[i];
// 	int max=0;
// 	for(int i=0;i<n;i++)
// 		if(arr[i]>max)
// 		max=arr[i];
// 	int count[max+1]={0};
// 	for(int i=0;i<n;i++)
// 		{
// 		count[arr[i]]++;	
// 		}
// 	int maxi=0;
// 	for(int i=0;i<max+1;i++)
// 		{if(maxi<count[i])
// 		{maxi=count[i];
// 		val=i;}		


// }
// cout<<val;
// }