#include "linkedEdges.h"
#include <stdlib.h>
#include <stdio.h>

Edge *Create_edge(Node inEnd1, Node inEnd2, int inWeight)
{
	Edge *edgeData = malloc(sizeof(struct Edge));
	edgeData->end1 = inEnd1;
	edgeData->end2 = inEnd2;
	edgeData->weight = inWeight;
	
	return edgeData;
}

Node *Create_node(char* newName)
{
	Node *nodeData = malloc(sizeof(struct Node));
	nodeData->name = newName;
	nodeData->headEdgeNode = NULL;

	return nodeData;
}

int Add_EdgeNode(Edge newEdge, edgeNode *headNode)
{
	edgeNode *curr = headNode;	
	while(curr->nextEdgeNode!=NULL)	
	{
		curr = curr->nextEdgeNode;
	}
	curr->nextEdgeNode = Edgenode_create(newEdge);
}

//TODO: finish this!!!

