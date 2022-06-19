/* Assume that same road construction project is given to another person. The amount he will earn from this project is directly proportional to the budget of the project.
This person is greedy, so he decided to maximize the budget by constructing those roads who have highest construction cost. Design an algorithm and implement it using a program to find the maximum budget required for the project.
*/

#include<bits/stdc++.h> 
using namespace std; 
int main (){
    cout << "AJAY GOSWAMI --> F --> 20011502" << endl;
    cout << "Question 24" << endl;
    int n = 5, m = 6, source = 1;
    vector < pair < int, int >>g[n + 1];	// assuming 1 based indexing of graph
    // Constructing the graph 
    g[1].push_back ( {2, 2});
    g[1].push_back ({ 4, 1});
    g[2].push_back ( {1, 2});
    g[2].push_back ( {5,5});
    g[2].push_back ( {3,4});
    g[2].push_back ( { 2,4});
    g[2].push_back ( {4,3});
    g[3].push_back ({5, 1});
    g[4].push_back ({1, 1});
    g[4].push_back ({3, 3});
    g[5].push_back ({2, 5});
    g[5].push_back ({3, 1});
    priority_queue < pair < int, int >, vector < pair < int, int >>,greater < pair < int, int >>>pq; 
    vector < int >distTo (n + 1, INT_MAX);
    distTo[source] = 0;
    
    pq.push (make_pair (0, source));	// (dist,source) 
    while (!pq.empty ()){
        int dist = pq.top ().first;
        int prev = pq.top ().second; 
        pq.pop ();
    
        vector < pair < int, int >>::iterator it;
        for (it = g[prev].begin (); it != g[prev].end (); it++)
        {
        int next = it->first;
        int nextDist = it->second;
        if (distTo[next] > distTo[prev] + nextDist){ 
            distTo[next] = distTo[prev] + nextDist; 
            pq.push (make_pair (distTo[next], next));
        }
    }
    }
    cout << "The distances from source " << source << " are : \n"; 
    for (int i = 1; i <= n; i++)
        cout << distTo[i] << " "; 
    cout << "\n";
    return 0;
}

