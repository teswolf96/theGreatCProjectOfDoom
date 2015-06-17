#include <linkedListNodes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

nodeNode *Nodenode_create(Node *node)
{
	nodeNode *nodeNodeData = malloc(sizeof(struct nodeNode));
	nodeNodeData->theNode = node;
	nodeNodeData->nextnodeNode = NULL;

	return nodeNodeData;
}

int NodeNode_add(Node *node, nodeNode *headNode)
{
	nodeNode *curr = malloc(sizeof(struct nodeNode));
	nodeNode *prev = headNode;
	curr->theNode = node;
	curr->nextnodeNode = NULL;
	while(prev->nextnodeNode!=NULL)
	{
		prev = prev->nextnodeNode;
	}
	prev->nextnodeNode = curr;

	return 0;
}

int NodeNode_free(nodeNode* headNodeNode)
{
	nodeNode *next = headNodeNode;
	while(next->nextnodeNode!=NULL)
	{
		nodeNode *prev = next;
		next = prev->nextnodeNode;
		free(prev);
	}
	free(next);
	return 0;
}

int isNodeCreated(char* searchName, nodeNode* headNodeNode){
	nodeNode *curr = headNodeNode;
	while(curr != NULL){
		if(strncmp(curr->theNode->name,searchName,99)==0){
			return 0;
		}
		curr = curr->nextnodeNode;
	}
	return -1;
}
