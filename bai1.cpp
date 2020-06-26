#include <stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu ");
	scanf("%d",&n);
	int ary[n];
	for (int i=0;i<n;i++){
		printf("Nhap phan tu thu %d\n",i);
		scanf("%d",&ary[i]);
	}
	int x=1;
	for (int i=n-1;i>=0;i--){
		if (ary[i]%2==0){
			x = ary[i];break;
		}
	}if(x%2 !=0){
		printf("No EVEN number");
	}else printf("so chan cuoi cung la %d",x);
	
	
	return 0;
}
