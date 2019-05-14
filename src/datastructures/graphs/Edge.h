#ifndef PATHS_IN_GRAPHS_EDGE_H
#define PATHS_IN_GRAPHS_EDGE_H


#include "../../types/types.h"

class Edge {
public:
    Edge(Edge const &edge);
    Edge(Node start, Node finish);
    Edge(Node start, Node finish, Weight weight);

    Weight GetWeight() const;
    void SetEdgeWeight(Weight w);
    Node GetStartingNode() const;
    Node GetFinishingNode() const;

    bool operator==(Edge const &e);

private:
    Node start;
    Node finish;
    Weight weight;
};


#endif //PATHS_IN_GRAPHS_EDGE_H
