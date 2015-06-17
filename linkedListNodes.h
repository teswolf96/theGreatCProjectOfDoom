#include "linkedEdges.h"

struct nodeNode {
		Node *theNode;
		struct nodeNode *nextnodeNode;
};

typedef struct nodeNode nodeNode;

nodeNode *Nodenode_create(Node *node);
int NodeNode_add(Node *node, nodeNode *headNode);
int NodeNode_free(nodeNode* headNodeNode);
int isNodeCreated(char* searchName, nodeNode* headNodeNode);
