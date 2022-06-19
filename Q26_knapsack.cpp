// : Given a knapsack of maximum capacity w. N items are provided, each having its own value and weight. You have to Design an algorithm and implement it using a program to find the list of the selected items such that the final selected content has weight w and has maximum value. You can take fractions of items,i.e. the items can be broken into smaller pieces so that you have to carry only a fraction xi of item i, where 0 ≤xi≤ 1.

#include <bits/stdc++.h> 
using namespace std; 
struct Item {
    int value; 
    int weight;
};

class Solution { 
    public:
        bool static comp(Item a, Item b) {
            double r1 = (double) a.value / (double) a.weight; 
            double r2 = (double) b.value / (double) b.weight; 
            return r1 > r2;
        }
        double fractionalKnapsack(int W, Item arr[], int n) { 
            sort(arr, arr + n, comp);
            int curWeight = 0; 
            double finalvalue = 0.0; 
            for (int i = 0; i < n; i++) {
                if (curWeight + arr[i].weight <= W) { 
                    curWeight += arr[i].weight; 
                    finalvalue += arr[i].value; 
                    cout<<i<< " "<<arr[i].weight<<endl;
                }
                else {
                    int remain = W - curWeight;
                    finalvalue += (arr[i].value / (double) arr[i].weight) * (double) remain; 
                    break;
                }
            }
            return finalvalue;
        }
};
int main() { 
    cout << "AJAY GOSWAMI --> F --> 20011502" << endl;
    cout << "Question 26" << endl;
    int n,weight;
    cin>>n>>weight;
    Item arr[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].weight; 
        cin>>arr[i].value;
    }
    Solution obj;
    double ans = obj.fractionalKnapsack(weight, arr, n);
    cout << "The maximum value is " << setprecision(2) << fixed << ans; 
    return 0;
}
