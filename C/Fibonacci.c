#include<stdio.h>
    int main()
    {
        int a=0,b=1,i,c,z;
        printf("Enter range : ");
        scanf("%d",&z);
        printf("%d\t%d\t",a,b);
        for(i=1;i<=z;i++)
        {
            c=a+b;
        	printf("%d\t",c);
            a=b;
            b=c;                        
        }
        return 0;
    }
