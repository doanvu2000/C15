#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do{
		printf("Nhap n>0: ");
		scanf("%d",&n);
		if (n<2 || n>1e6) printf("Nhap lai 2<=n<=10^6\n");
	}while (n<2 || n>1e6); //1e6 = 10^6
	int check,i=4,dem = 0;
	while(i<=n){
		check = 1;
		int temp = i;
		while(temp > 0){
			int d = temp %10;
			if (d !=4 && d!= 7){
				check = 0;break;
			}
			temp/=10;
		}
		if (check == 1) {
			printf("%d ",i);
			dem++;	
		}
		i++;
	}
	printf("\n%d",dem);
	return 0;
}

