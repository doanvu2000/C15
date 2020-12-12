#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do{
		printf("Nhap n>0: ");
		scanf("%d",&n);
		if (n<=0) printf("Nhap lai n > 0\n");
	}while (n<=0);
	//C1: dem so uoc
	int dem = 0,i;
	for(i = 1; i <= n;i++){
		if (n%i==0){
			dem++;
		}
		if (dem>2) break;
	}
	if (dem == 2) printf("yes");
	else printf("no");
	//C2: kiem tra chia het
	int i, kt = 1;
	if (n < 2){
		printf("no");
	}else{
		for(i=2;i*i<=n;i++){
			if (n%i == 0){
				kt = 0;
				break;
			}
		}
		if (kt == 1) printf("yes");
		else printf("no");
	}
	return 0;
}

