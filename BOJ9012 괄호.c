#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		int n1=0,n2=0;
		char a[51];
		scanf("%s", a);
		int z=0;
		while(a[z]!='\0')
		{
			if(a[z]=='(')
				n1++;
			if(a[z]==')')
				n2++;
			if(n1<n2)
			{
				printf("NO\n");
				break;
			}
			z++;
		}
		if(n1==n2)
			printf("YES\n");
		else if(n1>n2)
			printf("NO\n");
	}
}
