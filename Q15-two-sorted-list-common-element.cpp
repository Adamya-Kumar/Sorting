// You have been given two sorted integers array of size m and n. Design an algorithm and implement it using a program to find the list of elements which are common in both.(Time complexity = O(m*n)).

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "AJAY GOSWAMI --> F --> 20011502" << endl;
    cout << "Question 15" << endl;
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int i = 0;
    int j = 0;
    vector<int> v;
    while (n > i && m > j)
    {
        if (arr1[i] == arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout<<"Common elements in both array is :\n;";
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}