// Given an unsorted array of elements, design an algorithm and implement it using a program to find whether majority element exists or not. Also find median of the array. A majority element is an element that appears more than n/2 times, where n is the size of array.



#include <bits/stdc++.h> 
  using namespace std;

void findMajority (int arr[], int n) 
{
    int maxCount = 0;
    int index = -1;		// sentinels 
    for (int i = 0; i < n; i++) { 
      int count = 0;
      for (int j = 0; j < n; j++)
      {
        if (arr[i] == arr[j])
              count++;
      }
      if (count > maxCount)
      {
        maxCount = count;
        index = i;
      }
    }
    if (maxCount > n / 2)
        cout << arr[index] << endl;
    else
        cout << "No Majority Element" << endl;
}
 
int main ()
{
    cout << "AJAY GOSWAMI --> F --> 20011502" << endl;
    cout << "Question 30" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    } 
    findMajority (arr, n);

    return 0;
}


