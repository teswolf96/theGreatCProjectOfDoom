#include "linkedEdges.c"

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

int Add_edge(Edge addThis, Node addTo)
{

}

//TODO: finish this!!!