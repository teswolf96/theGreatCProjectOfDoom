#include <stdio.h>
#include <stdlib.h>
#include "nodesAndEdges.h"

struct edgeNode {
		Edge edgeNode;
		struct edgeNode *nextEdgeNode;
};

typedef struct edgeNode edgeNode;

struct edgeNode *Edgenode_create(Edge edge)
{
	edgeNode *edgeNodeData = malloc(sizeof(struct edgeNode));
	edgeNodeData->edgeNode = edge;
	edgeNodeData->nextEdgeNode = NULL;

	return edgeNodeData;
}

int EdgeNode_add(Edge edge, edgeNode *headNode)
{
	edgeNode *curr = malloc(sizeof(struct edgeNode));
	edgeNode *prev = headNode;
	curr->edgeNode = edge;
	curr->nextEdgeNode = NULL;
	while(prev->nextEdgeNode!=NULL)
	{
		prev = prev->nextEdgeNode;
	}
	prev->nextEdgeNode = curr;

	return 0;
}

int EdgeNode_free(edgeNode* headEdgeNode)
{
	edgeNode *next = headEdgeNode;
	while(next->nextEdgeNode!=NULL)
	{
		edgeNode *prev = next;
		next = prev->nextEdgeNode;
		free(prev);
	}
	free(next);
	return 0;
}

