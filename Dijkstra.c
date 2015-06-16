#include "linkedEdges.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void Dijkstra(Node *head, Node *start, int path)
{
	Node *curr = start;
	edgeNode *currEdge = curr->headEdgeNode;
	edgeNode *shorter = currEdge;
	while(currEdge != NULL)
	{
		if(shorter->theEdge->weight > currEdge->theEdge->weight)
		{
			shorter = currEdge;
		}
		currEdge = currEdge->nextEdgeNode;
	}
	path = currEdge->theEdge->weight;
	printf("%s->%s  :  %d\n", head->name, currEdge->theEdge->edge2->name, path);
	Dijkstra(head, currEdge->theEdge->edge2, path);
}