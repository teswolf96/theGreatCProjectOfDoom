#ifndef _linkedEdges_h
#define _linkedEdges_h

#include "nodesAndEdges.h"

struct edgeNode {
		Edge theEdge;
		struct edgeNode *nextEdgeNode;
};

typedef struct edgeNode edgeNode;

edgeNode *Edgenode_create(Edge edge);
int EdgeNode_add(Edge edge, edgeNode *headNode);
int EdgeNode_free(edgeNode* headEdgeNode);
