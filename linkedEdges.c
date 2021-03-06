#include <linkedEdges.h>
#include <stdio.h>
#include <stdlib.h>

edgeNode *Edgenode_create(Edge node)
{
	edgeNode *nodeEdgeData = malloc(sizeof(struct edgeNode));
	nodeEdgeData->theEdge = node;
	nodeEdgeData->nextEdgeNode = NULL;

	return nodeEdgeData;
}

int NodeNode_add(Edge node, edgeNode *edgeNode)
{
	edgeNode *curr = malloc(sizeof(struct edgeNode));
	edgeNode *prev = headNode;
	curr->theEdge = node;
	curr->nextEdgeNode = NULL;
	while(prev->nextEdgeNode!=NULL)
	{
		prev = prev->nextEdgeNode;
	}
	prev->nextEdgeNode = curr;

	return 0;
}

int NodeNode_free(edgeNode* headNodeNode)
{
	edgeNode *next = headNodeNode;
	while(next->nextEdgeNode!=NULL)
	{
		edgeNode *prev = next;
		next = prev->nextEdgeNode;
		free(prev);
	}
	free(next);
	return 0;
}
