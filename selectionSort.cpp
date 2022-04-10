// selection sort
#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int> &arr)
{
    // selection sort
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr.at(j) < arr.at(min))
            {
                min = j;
            }
        }
        int temp = arr.at(i);
        arr.at(i) = arr.at(min);
        arr.at(min) = temp;
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
    selectionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " ";
    }

    return 0;
}
