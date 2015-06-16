#include "linkedEdges.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void Dijkstra(Node *head, Node *start, int path)
{
	Node *curr = start;
	edgeNode *currEdge = curr->headEdgeNode;
	Node *shorter = currEdge;
	while(currEdge != NULL)
	{
		if(shorter->weight > currEdge->weight)
		{
			shorter = currEdge;
		}
		currEdge = currEdge->nextEdgeNode;
	}
	path = currEdge->weight;
	printf("%s->%s  :  %d\n", head->name, currEdge->edge2->name, path);
	Dijkstra(head, currEdge, path);
}