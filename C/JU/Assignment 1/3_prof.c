#include <stdio.h>
long long calcsum(int low, int up)
{
	long long sum = 0;
	sum=(up*(up+1)/2)-((low-1)*(low)/2);
	return sum;
}
int main()
{
	long n;
	printf("Enter total rooms:\n");
	scanf("%ld", &n);
	if(n==1)
	{
		printf("Hotel room np: %ld\n", n);
		return 0;
	}
	for(long i=1; i <= n; i++)
	{
		if(calcsum(0, i)==calcsum(i, n))
		{
			printf("Hotel room np: %ld\n", i);
			return 0;
		}

	}
	printf("Not possible \n");
	return 0;
}

