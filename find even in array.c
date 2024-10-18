#include<stdio.h>
int main()
{
	int a[20],b,c,i;
	printf("eneter the limit of numbers: ");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
	printf("enter the element in a[%d]: ",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<b;i++)
	{
		if (a[i]%2==0)
		printf("%d",a[i]);
	}
	for(i=0;i<b;i++)
	{
		a[i]%2!=0;
		printf("%d",a[i]);
	}
	return 0;
}
	

