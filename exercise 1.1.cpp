#include <stdio.h>
int main(){
	int a,b,c ;
	printf("Nhap so can so sanh\n");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b) {
		if (a>c){printf("%d la so lon nhat",a);
		}else{printf("%d la so lon nhat",c);
		} 
		}else if (b>c){printf("%d la so lon nhat",b);
		}else{printf("%d la so lon nhat",c);
		}
	} 
