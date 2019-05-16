#ifndef GRAPH_H
#define GRAPH_H
#include<stdio.h>
#include<stdlib.h>
#include "queue.h"
#define MAXVEX 100
#define true 1
typedef char VertexType;
typedef int EdgeType;
typedef struct EdgeNode  /*边表结点*/
{
	int adjvex;	//存储顶点下标
	EdgeType weight;
	struct EdgeNode* next;
}EdgeNode;
typedef struct VertexNode	/*顶点表节点*/
{
	VertexType data;
	EdgeNode* firstedge;
}VertexNode,AdjList[MAXVEX];
typedef struct
{
	AdjList adjList;
	int numVertexes,numEdges;
}GraphAdjList;
void CreatGraph(GraphAdjList *g);
void DFS(GraphAdjList *g,int i);
void DFSTravel(GraphAdjList *g);
void BFSTravel(GraphAdjList *g);
#endif

