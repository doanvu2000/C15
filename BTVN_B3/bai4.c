#include <stdio.h>
#include <math.h>
int main(){
	int n,m,k;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
		if (n<2 || n>1e6) printf("Nhap lai 2<=n<=10^6\n");
	}while (n<2 || n>1e6); //1e6 = 10^6
	
	do{
		printf("Nhap m: ");
		scanf("%d",&m);
		if (m<2 || m>1e6) printf("Nhap lai 2<=m<=10^6\n");
	}while (m<2 || m>1e6); //1e6 = 10^6
	
	do{
		printf("Nhap k: ");
		scanf("%d",&k);
		if (k<2 || k>1e6) printf("Nhap lai 2<=k<=10^6\n");
	}while (k<2 || k>1e6); //1e6 = 10^6
	
	int tcs = 0;
	while(n > 0){
		tcs += n%10;
		n/=10;
	}
	while(m>10){
		m/=10;
	}
	tcs+=m;
	if (tcs == k) printf("yes");
	else printf("no");
	return 0;
}

