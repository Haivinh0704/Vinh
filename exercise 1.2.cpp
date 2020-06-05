#include <stdio.h>
int main(){
	int a,b,c;
	printf ("nhap so can so sanh\n");
	scanf ("%d %d %d",&a,&b,&c);
	if (a>b){
	if(b>c){printf("%d la so nho nhat",c);	
		}else{printf("%d la nho nhat",b);}
		}else if (a>c){printf("%d la so nho nhat",c);
		} else{printf("%d la so nho nhat",a);}
	 
}
