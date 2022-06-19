// : Given a graph, Design an algorithm and implement it using a program to implement Floyd-Warshall all pair shortest path algorithm

#include <iostream> 
using namespace std; 
#define nV 4
#define INF 999

void printMatrix(int matrix[][nV]); 
void floydWarshall(int graph[][nV]) { 
    int matrix[nV][nV], i, j, k;
    for (i = 0; i < nV; i++)
        for (j = 0; j < nV; j++) 
            matrix[i][j] = graph[i][j];
    for (k = 0; k < nV; k++) { 
        for (i = 0; i < nV; i++) {
            for (j = 0; j < nV; j++) {
                if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }   
    printMatrix(matrix);
}

void printMatrix(int matrix[][nV]) { 
    for (int i = 0; i < nV; i++) {
        for (int j = 0; j < nV; j++) { 
            if (matrix[i][j] == INF) 
                printf("%4s", "INF");
            else
                printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}


int main() {
    cout << "AJAY GOSWAMI --> F --> 20011502" << endl;
    cout << "Question 25" << endl;
    int graph[nV][nV] = {{0, 3, INF, 5},{2, 0, INF, 4},{INF, 1, 0, INF},{INF, INF, 2, 0}};
    floydWarshall(graph);
}
