#include <iostream>
#include<stdio.h>
int a[400007],k;
int main()
{
	    int n,x,t;
		scanf("%d%d",&n,&x);
		    while(n--)
			{
				scanf("%d",&t);
				a[t%x]++;
				while(a[k%x]>k/x)
					k++;
				printf("%d\n",k);
			}
}
