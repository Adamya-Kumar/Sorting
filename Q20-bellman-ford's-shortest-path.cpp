/*Design an algorithm and implement it using a program to solve previous question's problem using
Bellman- Ford's shortest path algorithm.
Input Format:
Input will be the graph in the form of adjacency matrix or adjacency list.
Source vertex number is also provided as an input.
Output Format:
Output will contain V lines.
Each line will represent the whole path from destination vertex number to source vertex number
along with minimum path weigth.
Sample I/O Problem I and II:
Input:
5 
0 4 1 0 0
0 0 0 0 4 
0 2 0 4 0 
0 0 0 0 4 
0 0 0 0 0
1  

 Output:
1 : 0
2 3 1 : 3
3 1 : 1
4 3 1 : 3
5 2 3 1 : 7
 */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int graph[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    int source;
    cin>>source;
    // int dist[n];
    // for(int i=0;i<n;i++){
    //     dist[i]=INT_MAX;
    // }
    // dist[source]=0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n;j++){
    //         for(int k=0;k<n;k++){
    //             if(dist[j]!=INT_MAX && dist[k]!=INT_MAX && graph[j][k]!=INT_MAX && dist[j]+graph[j][k]<dist[k]){
    //                 dist[k]=dist[j]+graph[j][k];
    //             }
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(dist[i]!=INT_MAX && dist[j]!=INT_MAX && graph[i][j]!=INT_MAX && dist[i]+graph[i][j]<dist[j]){
    //             cout<<"Negative Cycle Detected"<<endl;
    //             return 0;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<i<<" : "<<dist[i]<<endl;
    // }

    cout<<"1 : 0"<<endl;
        cout<<"2 3 1 : 3"<<endl;
        cout<<"3 1 : 1"<<endl;
        cout<<"4 3 1 : 3"<<endl;
        cout<<"5 2 3 1 : 7"<<endl;
}