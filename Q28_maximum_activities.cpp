//Given a list of activities with their starting time and finishing time. Your goal is to select the maximum number of activities that can be performed by a single person such that selected activities must be non-conflicting. Any activity is said to be non-conflicting if the starting time of an activity is greater than or equal to the finishing time of the other activity. Assume that a person can only work on a single activity at a time. 



#include <bits/stdc++.h>
using namespace std; 
struct Activitiy
    {
        int start, finish;
    };
bool activityCompare(Activitiy s1, Activitiy s2)
{
    return (s1.finish < s2.finish);
}
void printMaxActivities(Activitiy arr[], int n)
{
    sort(arr, arr+n, activityCompare);
    cout << "Following activities are selected n"; 
    int i = 0;
    cout << "(" << arr[i].start << ", " << arr[i].finish << "), "; 
    for (int j = 1; j < n; j++)
    {
        if (arr[j].start >= arr[i].finish)
        {
            cout << "(" << arr[j].start << ", "<< arr[j].finish << "), "; 
            i = j;
        }
    }
}
int main()
{
    cout << "AJAY GOSWAMI --> F --> 20011502" << endl;
    cout << "Question 28" << endl;
    Activitiy arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMaxActivities(arr, n); 
    return 0;
}
