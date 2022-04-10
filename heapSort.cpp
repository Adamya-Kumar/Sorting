#include<iostream>
#include<vector>
using namespace std;
void heapSort(vector<int> &arr)
{
    //heap sort
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr.at(l) > arr.at(largest))
        largest = l;
    if (r < n && arr.at(r) > arr.at(largest))
        largest = r;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
int main()
{
    //driver program
    vector<int> arr;
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    heapSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " ";
    }
    return 0;
}