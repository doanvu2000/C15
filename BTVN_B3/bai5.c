#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	do{
		printf("Nhap a: ");
		scanf("%d",&a);
		if (a<1 || a>1e5) printf("Nhap lai 1<=a<=10^5\n");
	}while (a<1 || a>1e5); //1e5 = 10^5
	
	do{
		printf("Nhap b: ");
		scanf("%d",&b);
		if (b<1 || b>1e5) printf("Nhap lai 1<=b<=10^5\n");
	}while (b<1 || b>1e5); //1e5 = 10^5
	
	printf("%d/%d = ",a,b);
	int ucln = 0, temp1 = a, temp2 = b;
	int du = temp1 % temp2;
	while(du>0){
		temp1 = temp2;
		temp2 = du;
		du = temp1 % temp2;
	}
	ucln = temp2;
	printf("%d/%d",a/ucln,b/ucln);
	return 0;
}

