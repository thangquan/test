#include<stdio.h>
int main()
{
	int a,b;
	printf("Nhap a :");
	scanf("%d",&a);
	printf("Nhap b :");
	scanf("%d",&b);
	printf("Tong cua a+b=%d \n",a+b);
	printf("Hieu cua a-b=%d \n",a-b);
	printf("Tich cua a*b=%d \n",a*b);
	printf("Thuong cua a/b=%d \n",a/b);
	printf("Du cua a/b=%d \n",a%b);
	printf("phep chia chua dung, sua lai:\n");
	float c=a,d=b;
	printf("Thuong cua a/b=%f \n",c/d);
}
