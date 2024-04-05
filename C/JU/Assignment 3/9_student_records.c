#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#define MENU_ITEMS 5
typedef struct
{
    /* data */
    char name[50];
    long int roll;
    int marks;
    int dob[3];
} student;
void add(FILE *, student);
void modify(FILE *);
void printall(FILE *);
void fremove(FILE *, long);
int main()
{
    int ch, i; long int roll; char menu[][100] = {"1. Add a new record", "2. Delete a record", "3. Modify marks of each student", "4. Print all records" , "5. Exit"};
    FILE *fptr = fopen("9_output.bin", "r+b"); student newstudent;
    if (!fptr)
    {
        printf("Cannot open file!\n");
        return 1;
    }
    for (;;)
    {
        printf("========== MENU ==========\n");
        for (i = 0; i < MENU_ITEMS; i++)
            printf("%s\n", menu[i]);
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                add(fptr, newstudent);
                break;
            case 2:
                printf("Enter roll number: ");
                scanf("%ld", &roll);
                fremove(fptr, roll);
                break;
            case 3:
                modify(fptr);
                break;
            case 4:
                printf("File contents:\n");
                printall(fptr);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    fclose(fptr);
    return 0;
}
void add(FILE *fptr, student newstudent)
{
    char trap;
    fseek(fptr, 0, SEEK_END);
    printf("Enter student details:\n");
    printf("Roll number: ");
    scanf("%ld", &newstudent.roll);
    printf("Name: ");
    scanf("%c%[^\n]", &trap, newstudent.name);
    printf("Marks: ");
    scanf("%d", &newstudent.marks);
    printf("DOB: ");
    scanf("%d/%d/%d", &newstudent.dob[0], &newstudent.dob[1], &newstudent.dob[2]);
    assert((newstudent.dob[0] > 0 && newstudent.dob[0] <= 31) && (newstudent.dob[1] > 0 && newstudent.dob[1] <= 12) && (newstudent.dob[2] > 0));
    fwrite(&newstudent, sizeof(student), 1, fptr);
}
void printall(FILE *fptr)
{
    student student;
    fseek(fptr, 0, SEEK_SET);
    printf("\tRoll\t | \tName\t\t | Marks | \tDOB\n");
    while(fread(&student, sizeof(student), 1, fptr))
    {
        printf("%12ld%20s%14d", student.roll, student.name, student.marks);
        printf("\t\t%02d/%02d/%04d\n", student.dob[0], student.dob[1], student.dob[2]);
    }
}
void modify(FILE *fptr)
{
    student student; bool flag;
    fseek(fptr, 0, SEEK_SET);
    while(fread(&student, sizeof(student), 1, fptr))
        if(student.marks > 40 && student.marks < 50)
        {
            student.marks += 10;
            // printf("Pointer position -> %ld\n", ftell(fptr));
            fseek(fptr, -(int) sizeof(student), SEEK_CUR);
            fwrite(&student, sizeof(student), 1, fptr);
            flag = true;
        }
    if (!flag)
        printf("No marks to modify!\n");
    else
        printf("Grace marks added successfully!\n");
}
void fremove(FILE *fptr, long roll)
{
    FILE *temp = fopen("9_temp.bin", "w+b"); student student; bool flag;
    rewind(fptr);
    while(fread(&student, sizeof(student), 1, fptr))
        if (student.roll != roll)
            fwrite(&student, sizeof(student), 1, temp);
        else
        {
            printf("Removed successfully!\n");
            flag = true;
        }
    if (!flag)
        printf("No entries for the given roll number!\n");
    rewind(temp); fclose(fptr);
    fptr = fopen("9_output.bin", "w+b");
    while(fread(&student, sizeof(student), 1, temp))
        fwrite(&student, sizeof(student), 1, fptr);
    fclose(temp);
    remove("9_temp.bin");
}