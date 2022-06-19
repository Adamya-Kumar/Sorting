// Problem Statement: After end term examination, Akshay wants to party with his friends. All his friends are living as paying guest and it has been decided to first gather at Akshay’s house and then move towards party location. The problem is that no one knows the exact address of his house in the city. Akshay as a computer science wizard knows how to apply his theory subjects in his real life and came up with an amazing idea to help his friends. He draws a graph by looking in to location of his house and his friends’ location (as a node in the graph) on a map. He wishes to find out shortest distance andpath covering that distance from each of his friend’s location to his house and then whatsapp them this path so that they can reach his house in minimum time. Akshay has developed the program that implements Dijkstra’s algorithm but not sure about correctness of results. Can you also implement the same algorithm and verify the correctness of Akshay’s results? (Hint: Print shortestpath and distance from friends’ location to Akshay’s house)

#include<bits/stdc++.h> 
using namespace std; 

int main(){
    cout << "AJAY GOSWAMI --> F --> 20011502" << endl;
    cout << "Question 19" << endl;
    int n,m,source; 
    cin >> n >> m;
    vector<pair<int,int> > g[n+1];	// 1-indexed adjacency list for of graph int a,b,wt;
    for(int i = 0; i<m ; i++){ 
        int a,b, wt;
        cin >> a >> b >> wt;
        g[a].push_back(make_pair(b,wt)); 
        g[b].push_back(make_pair(a,wt));
    }


    cin >> source;
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >	pq; 
    //In pair => (dist,from)
    
    vector<int> distTo(n+1,INT_MAX); 
    distTo[source] = 0;
    pq.push(make_pair(0,source));	// (dist,from) while( !pq.empty() ){
    
    int dist = pq.top().first;
    int prev = pq.top().second; 
    pq.pop();
    
    vector<pair<int,int> >::iterator it;
    for( it = g[prev].begin() ; it != g[prev].end() ; it++){
        int next = it->first;
        int nextDist = it->second;
        if( distTo[next] > distTo[prev] + nextDist){
            distTo[next] = distTo[prev] + nextDist;
            pq.push(make_pair(distTo[next], next));
        }
    }

    cout << "The distances from source, " << source << ", are : \n"; 
    for(int i = 1 ; i<=n ; i++) 
        cout << distTo[i] << " ";
    cout << "\n"; 
    return 0;
}
