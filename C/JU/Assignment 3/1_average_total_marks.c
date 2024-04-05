#include <stdio.h>
#include <string.h>
#define TOTAL_STUDENTS 110
#define SUBJECTS 5
typedef struct
{
    /* data */
    char name[100];
    int roll;
    int marks[5];
    int total;
    float avg;
} student;
void sort(student *);
int main()
{
    student nstud[TOTAL_STUDENTS]; FILE *fptr, *nfptr; int i, j, sum;
    fptr = fopen("1_input.txt", "r");
    nfptr = fopen("1_output.txt", "w");
    if (!fptr)
    {
        printf("Cannot open input file!\n");
        return 1;
    }
    if (!nfptr)
    {
        printf("Cannot open output file!\n");
        return 1;
    }
    for (i = 0; i < TOTAL_STUDENTS; i++)
    {
        sum = 0;
        fscanf(fptr, "%d, %[^,], ", &nstud[i].roll, nstud[i].name);
        for (j = 0; j < SUBJECTS - 1; j++)
        {
            fscanf(fptr, "%d,", &nstud[i].marks[j]);
            sum += nstud[i].marks[j];
        }
        fscanf(fptr, "%d", &nstud[i].marks[j]);
        sum += nstud[i].marks[j];
        nstud[i].total = sum;
        nstud[i].avg = nstud[i].total / (float) SUBJECTS;
    }
    sort(nstud); j = 0;
    for (i = 0; i < TOTAL_STUDENTS; i++)
        fprintf(nfptr, "%d, %s, %d, %.2f\n", ++j, nstud[i].name, nstud[i].total, nstud[i].avg);
    fclose(nfptr);
    fclose(fptr);
    return 0;
}
void sort(student *nstud)
{
    int i, j; student temp;
    for (i = 0; i < TOTAL_STUDENTS - 1; i++)
        for (j = 0; j < TOTAL_STUDENTS - i - 1; j++)
            if (nstud[j].total < nstud[j + 1].total)
            {
                temp = nstud[j];
                nstud[j] = nstud[j + 1];
                nstud[j + 1] = temp;
            }
}