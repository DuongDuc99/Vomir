#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	printf ("nhap vao 3 so \n");
	printf ("nhap vao so a :\n");
	scanf  ("%d",&a);
	printf ("nhap vao so b :\n");
	scanf  ("%d",&b);
	printf ("nhap vao so c :\n");
	scanf  ("%d",&c);
	printf ("nhap xong ");
	
	if (a==0){
		if (b==0){
			if(c==0){
				printf ("phuong trinh vo so nghiem ");
			}else{
				printf ("phuong trinh vo nghiem ");
			}
		}else{
			float x = -(float)c/b;
			printf ("nghiem cua phuong trinh la :%f",x);
		}
	}else {
		int d = b*b-4*a*c;
		if (d<0){
			printf ("phuong trinh vo nghiem ");
		}else{
		    if (d==0){
			float x = -(float)c/(2*a);
			printf ("phuong trinh co nghiem kep la %f",x);
		}else {
			float x1 = -b +sqrt (d)/(2*a);
			float x2 = -b -sqrt (d)/(2*a);
			printf ("phuong trinh co 2 nghiem la %f va %f ",x1,x2);
		    }
		}
	}
	
	}

