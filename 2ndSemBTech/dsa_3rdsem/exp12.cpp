#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;

class Graph {
private:
    int vertices;
    vector<list<int>> adjList;

public:
    Graph(int vertices) {
        this->vertices = vertices;
        adjList.resize(vertices);
    }

    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
        adjList[dest].push_back(src);
    }

    void DFSUtil(int vertex, vector<bool>& visited) {
        visited[vertex] = true;
        cout << vertex << " ";
        for (int adjacent : adjList[vertex]) {
            if (!visited[adjacent]) {
                DFSUtil(adjacent, visited);
            }
        }
    }

    void DFS(int startVertex) {
        vector<bool> visited(vertices, false);
        DFSUtil(startVertex, visited);
        cout << endl;
    }

    void BFS(int startVertex) {
        vector<bool> visited(vertices, false);
        queue<int> q;
        visited[startVertex] = true;
        q.push(startVertex);
        while (!q.empty()) {
            int current = q.front();
            q.pop();
            cout << current << " ";
            for (int adjacent : adjList[current]) {
                if (!visited[adjacent]) {
                    visited[adjacent] = true;
                    q.push(adjacent);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    Graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 4);

    cout << "DFS traversal starting from vertex 0:\n";
    graph.DFS(0);

    cout << "BFS traversal starting from vertex 0:\n";
    graph.BFS(0);

    return 0;
}
