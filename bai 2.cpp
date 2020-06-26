#include <stdio.h>
void NhapMang(int ary[],int n){
	for (int i=0;i<n;i++){
		printf("nhap phan tu thu %d\t",i);
		scanf("%d",&ary[i]);
	}
}

float sum(int ary[],int n){
	float sum;
	for (int i=0;i<n;i++){
		sum = sum + ary[i];
	}
	return sum/n;
}

int main(){
	int n;
	printf("nhap so phan tu ");
	scanf("%d",&n);
	int ary[n];
	NhapMang(ary,n);
	printf("tb %.3f",sum(ary,n));
	
	
	
	return 0;
}
