#include "linkedEdges.h"
#include <stdio.h>
#include <stdlib.h>

edgeNode *Edgenode_create(Edge edge)
{
	edgeNode *edgeNodeData = malloc(sizeof(struct edgeNode));
	edgeNodeData->theEdge = edge;
	edgeNodeData->nextEdgeNode = NULL;

	return edgeNodeData;
}

int EdgeNode_add(Edge edge, edgeNode *headNode)
{
	edgeNode *curr = malloc(sizeof(struct edgeNode));
	edgeNode *prev = headNode;
	curr->theEdge = edge;
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
