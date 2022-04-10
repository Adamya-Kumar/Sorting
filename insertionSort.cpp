// insertion sort
#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector<int> &arr)
{
    // insertion sort
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr.at(i);
        int j = i - 1;
        while (j >= 0 && arr.at(j) > key)
        {
            arr.at(j + 1) = arr.at(j);
            j--;
        }
        arr.at(j + 1) = key;
    }
}
int main()
{
    // driver program
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
    insertionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " ";
    }

    return 0;
}
