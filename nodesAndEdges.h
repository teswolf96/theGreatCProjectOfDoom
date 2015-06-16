#ifndef _nodesAndEdges_h
#define _nodesAndEdges_h

struct Node {
		char* name;
		struct *headEdgeNode;
};

typedef struct Node Node;

struct Edge {
		Node end1;
		Node end2;
		int weight;
};

typedef struct Edge Edge;

Edge *Create_edge(Node inEnd1, Node inEnd2, int inWeight);
Node *Create_node(char* name);
Edge Add_edge(Edge addThis);
