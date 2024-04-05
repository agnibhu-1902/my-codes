#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX_CUSTOMER 105
typedef struct
{
    /* data */
    char acc_no[50];
    char name[50];
    float balance;
} customer;
void display_low_balance_customers(FILE *, customer);
void modify(FILE *, customer, char *, float, int);
int main()
{
    FILE *fptr = fopen("3_input.txt", "r+"); customer customer;
    char acc_no[50]; float amount; int code;
    if (!fptr)
    {
        printf("Cannot open file!\n");
        return 1;
    }
    display_low_balance_customers(fptr, customer);
    printf("\nEnter account number: ");
    scanf("%s", acc_no);
    printf("Enter code: ");
    scanf("%d", &code);
    if (code < 0 || code > 1)
    {
        printf("Invalid code!\n");
        return 1;
    }
    if (code)
        printf("Enter amount to deposit: ");
    else
        printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    modify(fptr, customer, acc_no, amount, code);
    fclose(fptr);
    return 0;
}
void display_low_balance_customers(FILE *fptr, customer customer)
{
    int i;
    rewind(fptr);
    printf("Customers with low balance:\n");
    for (i = 0; i < MAX_CUSTOMER; i++)
    {
        fscanf(fptr, "%[^,], %[^,], %f\n", customer.acc_no, customer.name, &customer.balance);
        if(customer.balance < 1000)
        {
            printf("Account no.: %s\t\t", customer.acc_no);
            printf("Name: %s\n", customer.name);
        }
    }
}
void modify(FILE *fptr, customer customer, char *acc_no, float amt, int code)
{
    int i; bool flag;
    FILE *tempptr = fopen("3_temp.txt", "w+");
    rewind(fptr);
    for (i = 0; i < MAX_CUSTOMER; i++)
    {
        fscanf(fptr, "%[^,], %[^,], %f\n", customer.acc_no, customer.name, &customer.balance);
        if (strcmp(customer.acc_no, acc_no) == 0)
        {
            if (code)
                customer.balance += amt;
            else
            {
                if (customer.balance - amt < 0)
                {
                    printf("The balance is insufficient for the specified withdrawal!\n");
                    fclose(tempptr);
                    remove("3_temp.txt");
                    return;
                }
                customer.balance -= amt;
            }
            fprintf(tempptr, "%s, %s, %.2f\n", customer.acc_no, customer.name, customer.balance);
            if (code)
                printf("Amount deposited!\n");
            else
                printf("Amount withdrawn!\n");
            flag = true;
        }
        else
            fprintf(tempptr, "%s, %s, %.2f\n", customer.acc_no, customer.name, customer.balance);
    }
    if (!flag)
    {
        printf("No records match this account number!\n");
        fclose(tempptr);
        remove("3_temp.txt");
        return;
    }
    fclose(fptr);
    fptr = fopen("3_input.txt", "w+");
    rewind(tempptr);
    for (i = 0; i < MAX_CUSTOMER; i++)
    {
        fscanf(tempptr, "%[^,], %[^,], %f\n", customer.acc_no, customer.name, &customer.balance);
        fprintf(fptr, "%s, %s, %.2f\n", customer.acc_no, customer.name, customer.balance);
    }
    fclose(tempptr);
    remove("3_temp.txt");
}