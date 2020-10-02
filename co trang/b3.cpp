#include<stdio.h>
#include<math.h>

int main()
{
	float x,y;
	printf("Nhap x :");
	scanf("%f",&x);
	printf("cau a, ");
	y=pow(x,7)*exp(x) +3*x-8;
	printf("y= %f\n",y);
	printf("cau b, ");
	y=(pow(x,x)+9)/(5*x+7);
	printf("y= %f\n",y);
	printf("cau c, ");
	y= fabs(5*x-30)*(2*x*x+9);
	printf("y= %f\n",y);
	printf("cau d, ");
	y=sqrt(7)+x*x;
	printf("y= %f\n",y);
		
}

