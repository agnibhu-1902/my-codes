#include <stdio.h>
#include <stdlib.h>
//Function prototypes
void bfs(int**, int, int);
void dfs(int**, int, int);
int main()
{
    int **a, n, s, d, i, j;
    do
    {
        printf("Enter the number of vertices in the graph : ");
        scanf("%d", &n);
    }while(n <= 0); //Run the loop until user gives positive input
    a = (int**) calloc(n, sizeof(int*)); //Dynamically allocate memory for adjacency matrix
    for (i=0; i<n; i++)
    {
        a[i] = (int*) calloc(n, sizeof(int));
    }    
    printf("\nEnter the edges :\n");
    do
    {
        printf("\n\tEnter the vertex pair for which there is an edge : ");
        scanf("%d%d", &s, &d); //Variables s and d stores the vertex pair
        a[s-1][d-1] = 1;
        a[d-1][s-1] = 1;
        printf("\nDo you want to enter more number of edges? [0/1] : ");
        scanf("%d", &s);
    }while(s != 0); //Loop until user does not want to enter any more edge
    printf("\nThe input graph is :\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d ", a[i][j]); //Display the adjacency matrix
        }
        printf("\n");
    }
    do
    {
        printf("\n\t1. BFS");
        printf("\n\t2. DFS");
        printf("\n\t3. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &d);
        switch(d)
        {
            case 1: //For BFS
                printf("\nPlease enter the source node : ");
                scanf("%d", &s);
                bfs(a, n, s-1);
                break;
            case 2: //For DFS
                printf("\nPlease enter the source node : ");
                scanf("%d", &s);
                dfs(a, n, s-1);
                break;
            case 3: //For Exit
                break;
            default:
                printf("\nEnter a valid choice");
                break;
        }
    }while(d != 3); //Loop until user chooses option 3
    free(a); //Free dynamically allocated adjacency matrix
    return 0;
}
void bfs(int **a, int n, int s)
{
    int *d = (int*) calloc(n, sizeof(int)); //Empty array storing distance information for each node
    int *q = (int*) calloc(n, sizeof(int)); //Empty queue
	int *parent = (int*) calloc(n, sizeof(int)); //Array storing parent information for each node   
    int front = -1, rear = -1, i, count = 0, k, u, v;
    for(i = 0; i < n; i++)     
    {
        d[i] = -1; //Initialize distance for each node as -1
        parent[i] = -1; //Initialize parent for each node as -1
    }
    d[s] = 0; //Source to source node distance
    q[++rear] = s; //Enqueue the source node
    printf("\nThe dequeued elements are (in order) :\n\n");
    while(front != rear)
    {
        v = q[++front]; //Dequeue the front element
        printf("%d\n", v+1);
        count++;
        for(u = 0; u < n; u++)
        {
            if(a[v][u] == 1) //Check if the node has an edge
            {
                if(d[u] < 0) //Check that the node isn't already traversed
                {
                    d[u] = d[v] + 1; //Update distance information
                    parent[u] = v; //Update parent information
                    q[++rear] = u; //Enqueue the node
                }
            }
        }
    }
    printf("\nThe distance of the nodes from source node %d : \n", s+1);
    for(i = 0; i < n; i++)
        printf("\nThe distance from node %d to node %d -> %d", (s+1), (i+1),  d[i]);
    if(count == n) //Check if all the nodes have been traversed
        printf("\n\nThe graph is connected.\n");
    else
        printf("\n\nThe graph is disconnected.\n");
    printf("\nThe shortest path from the nodes to source node %d :\n", s+1);
    for(i = 0; i < n; i++)
    {
        if(i != s)
        {
            printf("%d", i+1);
            k = i;
            while(parent[k] != -1)
            {
                k = parent[k];
                printf("->%d", k+1); //Display the parent of the nodes upto the source node
            }
        }
        printf("\n");
    }
    free(q); free(parent); free(d); //Free dynamically allocated memory
}
void dfs(int **a, int n, int s)
{
    int *d = (int*) calloc(n, sizeof(int)); //Empty array storing distance information for each node
    int *stk = (int*) calloc(n, sizeof(int)); //Empty stack
    int *parent = (int*) calloc(n, sizeof(int)); //Empty array storing parent information for each node
    int top = -1, i, count = 0, k, u, v;
    for(i = 0; i < n; i++)     
    {
        d[i] = -1; //Initialize distance for each node as -1
        parent[i] = -1; //Initialize parent for each node as -1
    }
    d[s] = 0; //Source to source node distance
    stk[++top] = s; //Push the source node
    printf("\nThe popped elements are (in order) :\n\n");
    while(top != -1)
    {
        v = stk[top--]; //Pop the top element
        printf("%d\n", v+1);
        count++;
        for(u = 0; u < n; u++)
        {
            if(a[v][u] == 1) //Check if the node has an edge
            {
                if(d[u] < 0) //Check that the node isn't already traversed
                {
                    d[u] = d[v] + 1; //Update distance information
                    parent[u] = v; //Update parent information
                    stk[++top] = u; //Push the node
                }
            }
        }
    }
    printf("\nThe distance of the nodes from source node %d : \n", s+1);
    for(i = 0; i < n; i++)
        printf("\nThe distance from node %d to node %d -> %d", (s+1), (i+1),  d[i]);
    if(count == n) //Check if all the nodes have been traversed
        printf("\n\nThe graph is connected.\n");
    else
        printf("\n\nThe graph is disconnected.\n");
    printf("\nThe shortest path from the nodes to source node %d :\n", s+1);
    for(i = 0; i < n; i++)
    {
        if(i != s)
        {
            printf("%d", i+1);
            k = i;
            while(parent[k] != -1)
            {
                k = parent[k];
                printf("->%d", k+1); //Display the parent of the nodes upto the source node
            }
        }
        printf("\n");
    }
    free(stk); free(parent); free(d); //Free dynamically allocated memory
}
