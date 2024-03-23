#include<iostream>
#include<vector>
using namespace std;

void addedge(vector< vector<int>> &adjMatrix,int from,int to,bool direction){
    int v = adjMatrix.size();

    if (from >= 0 && from < v && to >= 0 && to < v) {
        adjMatrix[from][to] = 1;

        if (direction)
         {
            adjMatrix[to][from] = 1; // incase of nonderiected graphs
        }
    } 
}

void display(vector<vector<int>> &adjMatrix, int v) {
    for (int i = 0; i < v; ++i) {
        for (int j = 0; j < v; ++j) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }       
}

int main(){
    int v = 4;
    vector< vector<int>> adjmatrix(v, vector<int>(v, 0));
    addedge(adjmatrix, 0, 1, false);
    addedge(adjmatrix, 1, 2, true);
    addedge(adjmatrix, 2, 3, true);
    addedge(adjmatrix, 3, 0, false);

    display(adjmatrix,v);

    return 0;
}
