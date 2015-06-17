#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "Dijkstra.c"


int main(int argc, char *argv[])
{
	FILE *fp = fopen("data.lolz", "r");
	if(fp==NULL)
	{
		printf("ERROR: FILE NOT THERE");
		return -1;
	}
	nodeNode *headNodeNode;
	char* e1;
	char* e2;
	int wt;
	while((fscanf(fp, "%s %s %d", e1, e2, &wt)) != EOF){
		if(headNodeNode==NULL){
			headNodeNode = Nodenode_create(Create_node(e1));			
		}else{
			if(isNodeCreated(e1) != 0)

		}
	}

	return 0;
}
