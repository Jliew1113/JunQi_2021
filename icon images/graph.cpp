#include "graph.h"

Graph::Graph(int V)
{
    this->V = V;
    adj = new QList<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

bool Graph::isReachable(int s, int d)
{
    if (s == d)
        return true;

    bool* visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    QList<int> queue;

    visited[s] = true;
    queue.push_back(s);


    QList<int>::iterator i;

    while (!queue.empty()) {

        s = queue.front();
        queue.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); ++i) {

            if (*i == d)
                return true;

            if (!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
    return false;
}
