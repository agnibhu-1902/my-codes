#include <stdio.h>

void printUnion(int *array1, int size1, int *array2, int size2) 
{
   int a = 0, b = 0;

   while(a < size1 && b < size2) {
      if (array1[a] < array2[b])
  
         printf("%d ", array1[a++]);
      else if (array2[b] < array1[a])
         printf("%d ", array2[b++]);
      else {
         printf("%d ", array2[b++]);
         a++;
      }
  }
  while (a < size1)
      printf("%d ", array1[a++]);
   while (b < size2)
      printf("%d ", array2[b++]);
}
 
int main()
{
    int n1,n2,arr1[50],arr2[50];
    printf("Enter the number of elements in first list\n");
    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
    { printf("Enter %d element in the first list\n",i+1);
      scanf("%d",&arr1[i]);
    }
    printf("Enter the number of elements in second list\n");
    scanf("%d",&n2);
    for(int j=0;j<n2;j++)
    { printf("Enter %d element in the second list\n",j+1);
      scanf("%d",&arr2[j]);
        
    }
      
    printUnion(arr1, n1, arr2, n2);
    
    return 0;
  }