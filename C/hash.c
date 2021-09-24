#include<stdio.h>
#include<string.h>
int N = 10;
unsigned int hash(const char* word)
{
        unsigned int hash_value = 0,i,n;
        for (i = 0, n = strlen(word); i < n; i++)
        {
             hash_value = (hash_value << 2) ^ word[i];
        }
        return hash_value % N; //N is size of hashtable
}
void main()
{
	char word[10];
	printf("Enter word : ");
	scanf("%s", &word);
	int n = hash(word);
	printf("Hash code : %d",n);
}
