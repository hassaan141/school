#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Function to perform DFS on the graph
void DFS(int start, vector<vector<int>>& adjList, vector<bool>& visited) {
    stack<int> stack;
    stack.push(start);

    while (!stack.empty()) {
        int node = stack.top();
        stack.pop();

        if (!visited[node]) {
            cout << node << " ";
            visited[node] = true;
        }

        for (int i = adjList[node].size() - 1; i >= 0; --i) {
            int neighbor = adjList[node][i];
            if (!visited[neighbor]) {
                stack.push(neighbor);
            }
        }
    }
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

    // Perform DFS starting from node 1
    cout << "Depth First Traversal starting from node 1: ";
    DFS(1, adjList, visited);

    return 0;
}