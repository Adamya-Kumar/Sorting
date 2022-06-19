/* Q6. Given an array of non -ve integers design an algorithm and program to count the number of pairs of integers such that there difference is equal to the k. */

#include <iostream>
using namespace std;

void check_pair(int arr[], int n, int k)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (((arr[i] - arr[j]) == k) || ((arr[i] - arr[j]) == -k))
                count++;
        }
    }
    if(count == 0)
        cout<<"pair not found";
    else
        cout << count <<" pairs present";
}
int main()
{
    cout<<endl<<endl<<endl<<endl;

    cout<<"AJAY GOSWAMI --> F --> 20011502"<<endl;
    cout<<"Question 6"<<endl;
    int n, k;
    cout << "Enter the value of elements you want to insert in an array";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value of k";
    cin >> k;
    check_pair(arr, n, k);

    cout<<endl<<endl<<endl<<endl;
    return 0;
}