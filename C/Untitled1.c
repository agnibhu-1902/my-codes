#include<stdio.h>
#include<conio.h>
int bits_bin(int n)
{
	int q=0;
	while(n>0)
	{
		q++;
		n/=2;
	}
	return q;	
}
void main()
{
	int t,x,i,d,res,ans,a[10],z=0;
	//Input
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&x);
		ans=0;
		for(d=1;d<=x;d++)
		{
			res=x/d;
			if(bits_bin(res)<=bits_bin(d))
			ans++;
		}
		printf("%d",ans);
		a[z]=ans;
		z++;
	}
}
