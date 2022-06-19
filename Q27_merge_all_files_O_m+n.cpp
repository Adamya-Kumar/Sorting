// : Given an array of elements. Assume arr[i] represents the size of file i. Write an algorithm and a program to merge all these files into a single file with minimum computation. For given two files A and B with sizes m and n, the computation cost of merging them is O(m+n). (Hint: use greedy approach)

#include <bits/stdc++.h>
using namespace std;
int minComputation(int size, int files[])
{
    priority_queue<int, vector<int>, greater<int> > pq; 
    for (int i = 0; i < size; i++) {
        pq.push(files[i]);
    }
    int count = 0;
    while (pq.size() > 1) {
        int first_smallest = pq.top(); pq.pop();
        int second_smallest = pq.top(); pq.pop();
        int temp = first_smallest + second_smallest; 
        count += temp;
        pq.push(temp);
    }
    return count;
}
int main()
{
    cout << "AJAY GOSWAMI --> F --> 20011502" << endl;
    cout << "Question 27" << endl;
    int n ; cin>>n; 
    int files[n];
    for(int i=0;i<n;i++){ 
        cin>>files[i];
    }
    cout << "Minimum Computations = "<< minComputation(n, files); 
    return 0;
}
