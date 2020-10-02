#include<stdio.h>
int main()
{
	int a;
	printf("Nhap a(3 chu so) :");
	scanf("%d",&a);
	printf("chu so hang tram là :%d\n",a/100);
	printf("chu so hang chuc là :%d\n",a/10%10);
	printf("chu so hang don vi là :%d",a%10);
}

