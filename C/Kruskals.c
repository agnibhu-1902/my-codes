#include <stdio.h>
#include <stdlib.h>
#define INF 999
 
int find(int, int*);
int uni(int, int, int*);
 
int main()
{
  int **cost, u, v;
  int i, j, k, a, b,ne=1,n,w,x,y,*parent;
  int min, mincost = 0;
	do
	{
		printf("Enter the number of nodes of the input graph:\t");
		scanf("%d", &n);
	}while (n <= 0);
	parent=(int*)calloc(n, sizeof(int));
	cost = (int **)calloc(n, sizeof(int *));
	for (i = 0; i < n; i++)
	{
		*(cost + i) = (int *)calloc(n, sizeof(int));
	}
	if (cost == NULL || parent == NULL)
	{
		printf("Allocation failed\n");
		return 1;
	}
  for(i=0; i<n; i++)
    parent[i] = -1;
	do
  {
    printf("\n\tEnter the node pairs (u,v) between which you want an edge: ");
    scanf("%d%d",&u,&v);
    printf("\nEnter the corresponding edge weight: ");
    scanf("%d",&w);
    (*(*(cost + (u-1)) + (v-1)))=w;
    (*(*(cost + (v-1)) + (u-1)))=w;
    printf("\nDo you want to insert more number of edges? (1-yes/0-no)");
    scanf("%d",&u);	
  }while(u!=0);
	for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
      {
        if (*(*(cost + i) + j) == 0)
        *(*(cost + i) + j) = INF;
      }
  }
	printf("Your input matrix is:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", *(*(cost + i) + j));
		}
		printf("\n");
	}
  printf("The edges of Minimum Cost Spanning Tree are: \n");
  while (ne < n)
  {
    for (i = 0, min = INF; i < n; i++)
    {
      for (j = 0; j < n; j++)
      {
        if ((*(*(cost + i) + j)) < min)
        {
          min = *(*(cost + i) + j);
          a = x = i;
          b = y = j;
        }
      }
    }
 
    x = find(x, parent);
    y = find(y, parent);
    if (uni(x, y, parent))
    {
      printf("%d edge (%d,%d) =%d\n", ne++, a+1, b+1, min);
      mincost += min;
    }
 
    *(*(cost + a) + b) = *(*(cost + b) + a) = INF;
  }
 
  printf("\nMinimum cost = %d\n", mincost);
  free(cost); free(parent);
  return 0;
}
 
int find(int i, int *parent)
{
  while (*(parent+i) != -1)
  i = *(parent+i);
  return i;
}
 
int uni(int i, int j, int *parent)
{
  if (i != j)
  {
    *(parent+j)= i;
    return 1;
  }
  return 0;
}
