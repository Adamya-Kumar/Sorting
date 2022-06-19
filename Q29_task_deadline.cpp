//  Given a long list of tasks. Each task takes specific time to accomplish it and each task has a deadline associated with it. You have to design an algorithm and implement it using a program to find maximum number of tasks that can be completed without crossing their deadlines and also find list of selected tasks.



#include<bits/stdc++.h> 
using namespace std; 

struct Job {
    int id; // Job Id
    int dead; // Deadline of job
    int profit; // Profit if job is over before or on deadline
    };
class Solution { 
    public:
        bool static comparison(Job a, Job b) { 
            return (a.profit > b.profit);
    }

pair < int, int > JobScheduling(Job arr[], int n) { 
    sort(arr, arr + n, comparison);
    int maxi = arr[0].dead; 
    for (int i = 1; i < n; i++)
        maxi = max(maxi, arr[i].dead); 
        int slot[maxi + 1];
        for (int i = 0; i <= maxi; i++) 
            slot[i] = -1;
        int countJobs = 0, jobProfit = 0; 
        for (int i = 0; i < n; i++) {
            for (int j = arr[i].dead; j > 0; j--) { 
                if (slot[j] == -1) {
                    slot[j] = i; 
                    countJobs++;
                    jobProfit += arr[i].profit; 
                    break;
                }
            }
        }
    return make_pair(countJobs, jobProfit);
}
};
int main() {
    cout << "AJAY GOSWAMI --> F --> 20011502" << endl;
    cout << "Question 29" << endl; 
    int n = 4;
    Job arr[n] = {{1,4,20},{2,1,10},{3,2,40},{4,2,30}};

    Solution ob;
    //function call
    pair < int, int > ans = ob.JobScheduling(arr, n); 
    cout << ans.first << " " << ans.second << endl;

    return 0;
}
