#include<iostream>
#include<vector>
using namespace std;
//count sort
void countSort(vector<int>&arr)
{
    //count sort
    int n = arr.size();
    vector<int> count(n,0);
    for(int i=0;i<n;i++)
    {
        count.at(arr.at(i))++;
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        while(count.at(i)>0)
        {
            arr.at(j) = i;
            j++;
            count.at(i)--;
        }
    }
}
int main()
{
    //driver program
    vector<int> arr;
    int n;
    cout<<"Enter the number of elements in the vector: ";
    cin>>n;
    cout<<"Enter the elements of the vector: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    countSort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr.at(i)<<" ";
    }
    return 0;
}
