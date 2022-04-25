#include<stdio.h>
#include<stdlib.h>
#define INF 999
void prims(int, int**);
int main()
{
    int i, j, n; int** cost;
    printf("\nEnter the number of nodes : ");
    scanf("%d", &n);
    cost = (int**)calloc(n, sizeof(int*));
    for(i = 0; i < n; i++)
        *(cost + i) = (int*)calloc(n, sizeof(int));
    if(cost == NULL)
    {
        printf("Allocation failed.\n");
        return 1;
    }
    printf("\nEnter the weighted matrix : \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", *(cost + i) + j);
            if(*(*(cost + i) + j) == 0)
                *(*(cost + i) + j) = INF;
        }
    }
    prims(n, cost);
    free(cost);
    return 0;
}
void prims(int n, int** cost)
{
    int i, j, u, v, min, mincost = 0, ne = 1; int* visited = (int*)calloc(n, sizeof(int));
    printf("\nThe edges considered for MST are : \n");
    visited[0] = 1;
    while(ne < n)
    {
        for(i = 0, min = INF; i < n; i++)
            for(j = 0; j < n; j++)
                if(cost[i][j] < min)
                {
                    if(visited[i] == 0)
                        continue;
                    else
                    {
                        min = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
        if(visited[v] == 0 && u != v)
        {
            printf("\n%d edge (%d, %d) = %d", ne++, u+1, v+1, min);
            mincost += min;
            visited[v] = 1;
        }
        cost[u][v] = cost[v][u] = INF;
    }
    printf("\nCost of constructed MST is %d", mincost);
    free(visited);
}