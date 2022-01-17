#include<stdio.h>
int main(void)
{
	int a[6],d=0,m=0;
	long long n,s=50,w=100,v=150;
	scanf("%d",&n);
	for(int i=0; i<6; i++)
	{
		scanf("%d",&a[i]);
		if(s>a[i])
			s=a[i];
		if(m<a[i])
			m=a[i];
		d+=a[i];
	}
	for(int z=0; z<5; z++)
	{
		for(int x=z+1; x<6; x++)
		{
			if(z+x!=5)
			{
				if(a[z]+a[x]<w)
					w=a[z]+a[x];
				for(int c=x+1; c<6; c++)
				{
					if(x+c!=5&&z+c!=5&&a[z]+a[x]+a[c]<v)
						v=a[z]+a[x]+a[c];
				}
			}
		}
	}
	if(n==1)
		printf("%d",d-m);
	else
		printf("%lld",s*(5*n*n-16*n+12)+w*(8*n-12)+v*4);
}
