#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr.at(high);
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr.at(j) < pivot)
        {
            i++;
            int temp = arr.at(i);
            arr.at(i) = arr.at(j);
            arr.at(j) = temp;
        }
    }
    int temp = arr.at(i + 1);
    arr.at(i + 1) = arr.at(high);
    arr.at(high) = temp;
    return i + 1;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
    quickSort(arr,0,n-1);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr.at(i)<<" ";
    }

    return 0;
}