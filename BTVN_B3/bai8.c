#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
		if (n<1 || n>1000) printf("Nhap lai 1<=a<=1000\n");
	}while (n<1 || n>1000); 
	int f1=0,f2=1,f3=1;
	while(f3<n)	{
		printf("%d ",f3);
		f3 = f2 + f1;
		f1 = f2;
		f2 = f3;
	}
	return 0;
}
