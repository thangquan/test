#include<stdio.h>
int main()
{
	int a,b,max;
	printf("Nhap a :");
	scanf("%d",&a);
	printf("Nhap b :");
	scanf("%d",&b);
	max= a>=b?a:b;
	printf("max cua a ,b là: %d ",max);
}
