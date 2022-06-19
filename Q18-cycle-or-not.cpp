//: Given a directed graph, design an algorithm and implement it using a program to find whether cycle exists in the graph or not.


#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool isCyclicConntected(vector<int> adj[], int s,
						int V, vector<bool>& visited)
{
	
	vector<int> parent(V, -1);

	
	queue<int> q;

	
	visited[s] = true;
	q.push(s);

	while (!q.empty()) {

	
		int u = q.front();
		q.pop();

		
		for (auto v : adj[u]) {
			if (!visited[v]) {
				visited[v] = true;
				q.push(v);
				parent[v] = u;
			}
			else if (parent[u] != v)
				return true;
		}
	}
	return false;
}

bool isCyclicDisconntected(vector<int> adj[], int V)
{
	
	vector<bool> visited(V, false);

	for (int i = 0; i < V; i++)
		if (!visited[i] && isCyclicConntected(adj, i,
										V, visited))
			return true;
	return false;
}


int main()
{
    cout << "AJAY GOSWAMI --> F --> 20011502" << endl;
    cout << "Question 18" << endl;
	int V = 4;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 1, 2);
	addEdge(adj, 2, 0);
	addEdge(adj, 2, 3);

	if (isCyclicDisconntected(adj, V))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}