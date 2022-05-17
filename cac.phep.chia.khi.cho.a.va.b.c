#include<stdio.h>

int main(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	
	printf("Hieu cua a va b la: %d",a+b);
	printf("\nHieu cua a va b la: %d",a-b);
	printf("\nTich cua a va b la: %d",a*b);
	if(b == 0) {
	     printf("\nMau bang 0 thi k the thuc hien phep chia");
	} else {
		printf("\nThuong cua a va b la: %f",(float)a/b);
	}
return 0;
}
