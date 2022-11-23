#include <stdio.h>
#include <stdlib.h>
struct adjlistNode{
    int dest;
    struct adjlistNode*next;
};
struct adjlist{
    struct adjlistNode*head;
};
struct Graph{
    int V;
    struct adjlist*array;
    
};
struct adjlistNode*newadjlistNode(int dest){
    struct adjlistNode*newNode=(struct adjlistNode*)malloc(sizeof(struct adjlistNode));
    newNode->dest=dest;
    newNode->next=NULL;
    return newNode;
}
struct Graph*creatGreaph(int V){
    struct Graph*graph=(struct Graph*)malloc(sizeof(struct Graph));
    graph->V=V;
    graph->array=(struct adjlist*)malloc(V*sizeof(struct adjlist));
    
    int i;
    for(i=0;i<V;++i)
        graph->array[i].head=NULL;
        return graph;
    
}
void addEdge(struct Graph*graph,int src,int dest){
    struct adjlistNode*newNode=newadjlistNode(dest);
    newNode->next=graph->array[src].head;
    graph->array[src].head=newNode;
    newNode=newadjlistNode(src);
    newNode->next=graph->array[dest].head;
    graph->array[dest].head=newNode;
}
void printgraph(struct Graph*graph){
    int V;
    for (V=0; V<graph->V; ++V) {
        struct adjlistNode*pCrawl=graph->array[V].head;
        printf("\n Adjacency list of vertex %d\n head",V);
        while (pCrawl) {
            printf("-> %d",pCrawl->dest);
            pCrawl=pCrawl->next;
        }
        printf("\n");
    }
}

int main(){
    int V=5;
    struct Graph*graph=creatGreaph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    printgraph(graph);
    return 0;
}