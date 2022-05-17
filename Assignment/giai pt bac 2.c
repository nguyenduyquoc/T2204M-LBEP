#include <stdio.h>
#include <math.h>
//giai phuong trinh bac hai
int main(){
	int a, b, c;
	float x, x1, x2;
	int denta;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);
	
	if (a == 0){
		if(b == 0){
			if (c != 0){
		      	printf("Phuong trinh vo nghiem");
	   	  } else {
	   	  	    printf("Phuong trinh co vo so nghiem");
		}
		} else {
			x = (float)-c/b;
		    printf("Phuong trinh co 1 nghiem duy nhat x = %lf",x);	
		}
	} else {
	    denta = b*b - 4*a*c;
		if (denta < 0) {
			printf("Phuong trinh vo nghiem");
		} 
		if (denta == 0 ){
			x = (float)-b/(2*a);
			printf("Phuong trinh co nghiem kep x = %lf",x);
		} 
		if (denta > 0){
			x1 = (float)(-b-sqrt(denta))/2*a;
			x2 = (float)(-b+sqrt(denta))/2*a;
			printf("Phuong trinh co hai nghiem phan biet x1 = %lf, x2 = %lf",x1,x2);
		}
	}
	return 0;
}
