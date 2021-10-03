//Header files
#include<stdio.h>
#include<stdlib.h>
//Function prototypes
int itrLinear(int*,int,int);
int recLinear(int*,int,int);
int itrBinary(int*,int,int);
int recBinary(int*,int,int,int);
int main()
{
	int ch,pos,no,*arr,size,i;
	//Input size of the array
	do
	{
		printf("Enter size of the list : ");
		scanf("%d",&size);
	}
	while(size<=0);
	arr=(int*)calloc(size,sizeof(int));//Dynamically allocate the array
	printf("\nEnter elements (in ascending order):\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);//Store elements in the array
	do
	{
		printf("\n====== MENU ======\n");
		printf("\n1.Iterative Linear Search\n2.Recursive Linear Search\n3.Iterative Binary Search\n4.Recursive Binary Search\n5.Exit\n");
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		if(ch>0 && ch<5)
		{
			printf("\nEnter the number to search : ");
			scanf("%d",&no);
		}
		switch(ch)
		{
			case 1://For iterative linear search
				pos=itrLinear(arr,no,size);
				if(pos!=-1)
					printf("\nFound at position %d\n",pos);
				else
					printf("\nNot found\n");
				break;
			case 2://For recursive linear search
				pos=recLinear(arr,no,size-1);
				if(pos!=-1)
					printf("\nFound at position %d\n",pos);
				else
					printf("\nNot found\n");
				break;
			case 3://For iterative binary search
				pos=itrBinary(arr,no,size);
				if(pos!=-1)
					printf("\nFound at position %d\n",pos);
				else
					printf("\nNot found\n");
				break;
			case 4://For recursive binary search
				pos=recBinary(arr,no,0,size-1);
				if(pos!=-1)
					printf("\nFound at position %d\n",pos);
				else
					printf("\nNot found\n");
				break;
			case 5://For exit
				printf("\nProgram terminated");
				break;
			default:
				printf("\nInvalid choice!\n");
		}
	}
	while(ch!=5);
	free(arr);//Empty dynamically allocated memory
	return 0;
}
int itrLinear(int *arr,int no,int size)
{
	int i,pos=-1;
	for(i=0;i<size;i++)
	{
		if(arr[i]==no)//Linearly traverse through each element in the array
		{
			pos=i+1;//Store position if element found
			break;
		}
	}
	return pos;
}
int recLinear(int *arr,int no,int size)
{
	if(size<0)//Base case
		return -1;
	else//Recursive case
	{
		if(arr[size]==no)//If found
			return size+1;
		else//If not found
			return recLinear(arr,no,size-1);
	}
}
int itrBinary(int *arr,int no,int size)
{
	int lb=0,ub=size,mid;
	while(lb<=ub)
	{
		mid=(lb+ub)/2;//Calculate middle element
		if(no>arr[mid])
			lb=mid+1;//Change lower bound to be the element after mid
		else if(no<arr[mid])
			ub=mid-1;//Change upper bound to be the element before mid
		else//If the element to search is the middle element
			return mid+1;
	}
	return -1;
}
int recBinary(int *arr,int no,int lb,int ub)
{
	int mid;
	if(lb>ub)//Base case
		return -1;
	else//Recursive case
	{
		mid=(lb+ub)/2;//Calculate middle element
		if(no>arr[mid])
			return recBinary(arr,no,mid+1,ub);//Change lower bound to be the element after mid
		else if(no<arr[mid])
			return recBinary(arr,no,lb,mid-1);//Change upper bound to be the element before mid
		else//If the element to search is the middle element
			return mid+1;
	}
}
