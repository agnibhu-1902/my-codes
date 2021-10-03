//Program for sorting an array
#include<stdio.h>
#include<stdlib.h>
void itr_bubble_sort(int*,int);
void rec_bubble_sort(int*,int,int);
void mod_itr_bubble_sort(int*,int);
void mod_rec_bubble_sort(int*,int,int);
void itr_selection_sort(int*,int);
void rec_selection_sort(int*,int,int);
void itr_insertion_sort(int*,int);
void rec_insertion_sort(int*,int,int);
void rec_quick_sort(int*,int,int);
int partition(int*,int,int);
void display(int*,int);
int main()
{
	int *arr,ch,size,i;char prompt;
	do
	{
		printf("\nEnter the size of the array : ");
		scanf("%d",&size);
		arr=(int*)calloc(size,sizeof(int));
		printf("\n");
		for(i=0;i<size;i++)
		{
			printf("Enter element in position %d : ",i+1);
			scanf("%d",&arr[i]);
		}
		display(arr,size);
		printf("\n===== MENU =====\n1.Iterative Bubble Sort\n2.Recursive Bubble Sort\n3.Iterative Bubble Sort (Modified)\n4.Recursive Bubble Sort (Modified)\n5.Iterative Selection Sort\n6.Recursive Selection Sort\n7.Iterative Insertion Sort\n8.Recursive Insertion Sort\n9.Iterative Quick Sort\n10.Recursive Quick Sort\n");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nSorting....\n");
				itr_bubble_sort(arr,size);
				break;
			case 2:
				printf("\nSorting....\n");
				rec_bubble_sort(arr,0,size-1);
				break;
			case 3:
				printf("\nSorting....\n");
				mod_itr_bubble_sort(arr,size);
				break;
			case 4:
				printf("\nSorting....\n");
				mod_rec_bubble_sort(arr,0,size-1);
				break;
			case 5:
				printf("\nSorting....\n");
				itr_selection_sort(arr,size);
				break;
			case 6:
				printf("\nSorting....\n");
				rec_selection_sort(arr,0,size-1);
				break;
			case 7:
				printf("\nSorting....\n");
				itr_insertion_sort(arr,size);
				break;
			case 8:
				printf("\nSorting....\n");
				rec_insertion_sort(arr,0,size-1);
				break;
			case 9:
				break;
			case 10:
				printf("\nSorting....\n");
				rec_quick_sort(arr,0,size-1);
				display(arr,size);
				break;
			default:
				printf("\nINVALID CHOICE!\n");
		}
		printf("\n");
		do
		{
			printf("Do you want to continue? [Y/n] : ");
			fflush(stdin);
			scanf("%c",&prompt);
		}
		while(prompt!='Y'&&prompt!='y'&&prompt!='N'&&prompt!='n');
		free(arr);
	}
	while(prompt!='N'&&prompt!='n');
	printf("\nExitting....\n");
	return 0;
}
void itr_bubble_sort(int *a,int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	display(a,n);
}
void rec_bubble_sort(int *a,int lb,int ub)
{
	int temp,j;
	if(lb>ub)
	{
		display(a,ub+1);
		return;
	}
	else
	{
		for(j=0;j<ub-lb;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		rec_bubble_sort(a,lb+1,ub);
	}
}
void mod_itr_bubble_sort(int *a,int n)
{
	int i,j,temp,flag;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
	display(a,n);
}
void mod_rec_bubble_sort(int *a,int lb,int ub)
{
	int temp,j,flag;
	if(lb>ub)
	{
		display(a,ub+1);
		return;
	}
	else
	{
		flag=0;
		for(j=0;j<ub-lb;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			display(a,ub+1);
			return;
		}
		else
			rec_bubble_sort(a,lb+1,ub);
	}
}
void itr_selection_sort(int *a,int n)
{
	int min,pos,temp,i,j;
	for(i=0;i<n-1;i++)
	{
		min=a[i+1];
		for(j=i+1;j<n;j++)
		{
			if(a[j]<=min)
			{
				min=a[j];
				pos=j;
			}
		}
		if(a[pos]<a[i])
		{
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
		}
	}
	display(a,n);
}
void rec_selection_sort(int *a,int lb,int ub)
{
	int min=a[lb+1],j,pos,temp;
	if(lb>=ub)
	{
		display(a,ub+1);
		return;
	}
	for(j=lb+1;j<=ub;j++)
	{
		if(a[j]<=min)
		{
			min=a[j];
			pos=j;
		}
	}
	if(a[pos]<a[lb])
	{
		temp=a[lb];
		a[lb]=a[pos];
		a[pos]=temp;
	}
	rec_selection_sort(a,lb+1,ub);
}
void itr_insertion_sort(int *a,int n)
{
	int i,j,item;
	for(i=0;i<n;i++)
	{
		item=a[i];j=i-1;
		while(j>=0&&a[j]>item)
		{
			a[j+1]=a[j];
			j-=1;
		}
		a[j+1]=item;
	}
	display(a,n);
}
void rec_insertion_sort(int *a,int lb,int ub)
{
	int item,j;
	if(lb>ub)
	{
		display(a,ub+1);
		return;
	}
	else
	{
		item=a[lb];
		j=lb-1;
		while(j>=0&&a[j]>item)
		{
			a[j+1]=a[j];
			j-=1;
		}
		a[j+1]=item;
		rec_insertion_sort(a,lb+1,ub);
	}
}
void rec_quick_sort(int *arr,int lb,int ub)
{
	int j;
	if(lb>=ub)
		return;
	else
	{
		j=partition(arr,lb,ub);
		rec_quick_sort(arr,lb,j-1);
		rec_quick_sort(arr,j+1,ub);
	}
}
int partition(int *arr,int lb,int ub)
{
	int pivot=arr[lb],down=lb,up=ub,temp;
	while(down<up)
	{
		while(arr[down]<=pivot&&down<up)
			down+=1;
		while(arr[up]>pivot)
			up-=1;
		if(down<up)
		{
			temp=arr[down];
			arr[down]=arr[up];
			arr[up]=temp;
		}
	}
	arr[lb]=arr[up];
	arr[up]=pivot;
	return up;
}
void display(int *a,int n)
{
	int i;
	printf("\nElements in the array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
