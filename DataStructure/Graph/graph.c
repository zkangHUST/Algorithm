#include "graph.h"
int visited[MAXVEX]={0};
void CreatGraph(GraphAdjList *g)
{
	int i,j,k;
	EdgeNode *e;
	scanf("%d%d",&g->numVertexes,&g->numEdges);
	char c;
	for(i=0;i<g->numVertexes;i++)
	{
		while((c=getchar())=='\n'||c==' ');
		g->adjList[i].data = c;
		g->adjList[i].firstedge = NULL;
	}
	for(k=0;k<g->numEdges;k++)
	{
		scanf("%d%d",&i,&j);
		e=(EdgeNode*)malloc(sizeof(EdgeNode));
		e->adjvex = j;
		e->next = g->adjList[i].firstedge;
		g->adjList[i].firstedge= e;
                /*e=(EdgeNode*)malloc(sizeof(EdgeNode));//对于无向图，添加这段代码
                e->adjvex = i;
                e->next = g->adjList[j].firstedge;
                g->adjList[j].firstedge= e;*/

	}
}
void DFS(GraphAdjList *g,int i)
{
	EdgeNode *p;
	visited[i]=1;
	printf("%c ",g->adjList[i].data);
	p = g->adjList[i].firstedge;
	while(p)
	{
		if(visited[p->adjvex]==0)
			DFS(g,p->adjvex);
		p=p->next;
	}
}
void DFSTravel(GraphAdjList *g)
{
	int i;
	for(i=0;i<g->numVertexes;i++)
	{
		if(!visited[i])
			DFS(g,i);	//主要是为了处理非连通图，如果为连通图,那么DFS函数执行一次即可遍历全部节点
	}
}
void BFSTravel(GraphAdjList *g)
{
	int i;
	int tmp;
	EdgeNode *p;
	queue q;
	for(i=0;i<g->numVertexes;i++)
		visited[i]= 0;
	initQueue(&q);
	for(i=0;i<g->numVertexes;i++)
	{
		if(!visited[i])
		{
			visited[i]=1;
			printf("%c ",g->adjList[i].data);
			push(&q,i);
			while(!isEmpty(&q))
			{
				tmp  = pop(&q);
				p = g->adjList[tmp].firstedge;
				while(p)
				{
					if(!visited[p->adjvex])
					{
						visited[p->adjvex]=1;
						printf("%c ",g->adjList[p->adjvex].data);
						push(&q,p->adjvex);
					}
					
					p = p->next;
				}
			}
		}
	}
}
