#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to perform BFS on the graph
void BFS(int start, vector<vector<int>>& adjList, vector<bool>& visited) {
    queue<int> queue;
    queue.push(start);
    visited[start] = true;

    while (!queue.empty()) {
        int node = queue.front();
        queue.pop();
        cout << node << " ";

        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                queue.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }\  
}

int main() {
    // Number of nodes in the graph
    int n = 8; // Adjusted for node indexing from 1 to 7
    vector<vector<int>> adjList(n);

    // Adding edges based on the assumed graph structure
    adjList[1] = {2, 3};
    adjList[2] = {4};
    adjList[3] = {4};
    adjList[4] = {5};
    adjList[5] = {6, 7};
    adjList[6] = {};
    adjList[7] = {};

    // Vector to keep track of visited nodes
    vector<bool> visited(n, false);

    // Perform BFS starting from node 1
    cout << "Breadth First Traversal starting from node 1: ";
    BFS(1, adjList, visited);

    return 0;
}