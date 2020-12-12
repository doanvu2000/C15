#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
		if (n<2 || n>1e9) printf("Nhap lai 2<=n<=10^9\n");
	}while (n<2 || n>1e9); //1e9 = 10^9
	int i = 2;
	printf("%d = ",n);
	while(n>1){
		while(n%i==0){
			n/=i;
			if (n>1) printf("%d * ",i);
			else printf("%d",i);
		}
		i++;
	}
	return 0;
}

