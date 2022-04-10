#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>&arr)
{
        //bubble sort
        for(int i=0; i<arr.size()-1; i++)
        {
            for(int j=0; j<arr.size()-i-1; j++)
            {
                if(arr.at(j)>arr.at(j+1))
                {
                    int temp = arr.at(j);
                    arr.at(j) = arr.at(j+1);
                    arr.at(j+1) = temp;
                }
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
    bubbleSort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr.at(i)<<" ";
    }

return 0;
}
