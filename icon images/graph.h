#ifndef GRAPH_H
#define GRAPH_H

#include <QList>

class Graph {
    int V;

    QList<int>* adj;
public:
    Graph(int V);

    void addEdge(int v, int w);
    bool isReachable(int s, int d);
};

#endif // GRAPH_H
