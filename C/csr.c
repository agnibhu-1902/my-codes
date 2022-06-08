#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    FILE *fptr; int a, b, *vptr, *eptr, vcount, ecount, i;
    fptr = fopen(argv[1], "r");
    fscanf(fptr, "%d\n", &vcount);
    fscanf(fptr, "%d\n", &ecount);
    vptr = (int*)calloc(vcount, sizeof(int));
    eptr = (int*)calloc(ecount, sizeof(int));
    for(i = 0; i < vcount; i++)
        vptr[i] = -1;
    i = 0;
    while(!feof(fptr))
    {
        fscanf(fptr, "%d,%d\n", &a, &b);
        if(vptr[a - 1] == -1)
            vptr[a - 1] = i;
        eptr[i++] = b;
    }
    fclose(fptr);
    printf("\nvptr:\t");
    for(i = 0; i < vcount; i++)
        printf("%d\t", vptr[i] + 1);
    printf("\neptr:\t");
    for(i = 0; i < ecount; i++)
        printf("%d\t", eptr[i]);
    printf("\n");
    free(vptr); free(eptr);
    return 0;
}