#include<stdio.h>
#include"graph.h"
//extern visited[MAXVEX];
int main()
{
	GraphAdjList g;
	CreatGraph(&g);
	BFSTravel(&g);
	return 0;
}
