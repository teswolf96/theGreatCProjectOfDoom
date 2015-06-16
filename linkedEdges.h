#ifndef _linkedEdges_h
#define _linkedEdges_h

#include "nodesAndEdges.h"

struct edgeNode {
		Edge theEdge;
		struct edgeNode *nextEdgeNode;
};

typedef struct edgeNode edgeNode;

edgeNode *Edgenode_create(Edge edge);
int Add_EdgeNode(Edge newEdge, EdgeNode *headNode);
int EdgeNode_free(edgeNode* headEdgeNode);
