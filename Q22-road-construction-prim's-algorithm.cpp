// Problem Statement: Assume that a project of road construction to connect some cities is given to your friend. Map of these cities and roads which will connect them (after construction) is provided to him in the form of a graph. Certain amount of rupees is associated with construction of each road. Your friend has to calculate the minimum budget required for this project. The budget should be designed in such a way that the cost of connecting the cities should be minimum and number of roads required to connect all the cities should be minimum (if there are N cities then only N-1 roads need to be constructed). He asks you for help. Now, you have to help your friend by designing an algorithm which will find the minimum cost required to connect these cities. (use Prim's algorithm)


#include <cstring> 
#include <iostream> 
using namespace std; 
#define INF 9999999
#define V 5


int G[V][V] = {
{0, 9, 75, 0, 0},
{9, 0, 95, 19, 42},
{75, 95, 0, 51, 66},
{0, 19, 51, 0, 31},
{0, 42, 66, 31, 0}
};

int main() {
    cout << "AJAY GOSWAMI --> F --> 20011502" << endl;
    cout << "Question 22" << endl;
    int no_edge; // number of edge 
    int selected[V];
    memset(selected, false, sizeof(selected)); 
    no_edge = 0;
    selected[0] = true;

    int x; // row number 
    int y; // col number
    cout << "Edge"<< " "<< "Weight"; 
    cout << endl;
    while (no_edge < V - 1) { 
        int min = INF;
        x = 0;
        y = 0;

        for (int i = 0; i < V; i++) { 
            if (selected[i]) {
                for (int j = 0; j < V; j++) { 
                    if (!selected[j] && G[i][j]) { 
                        if (min > G[i][j]) {
                            min = G[i][j]; x = i;
                            y = j;
                        }
                    }
                }
            }
        }
    cout << x << " - " << y << " : " << G[x][y];
    cout << endl; selected[y] = true; 
    no_edge++;
    }
    return 0;
}
