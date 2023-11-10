#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("nhap vao a:");
	scanf("%f", &a);
	printf("nhap vao b:");
	scanf("%f", &b);
	printf("nhap vao c:");
	scanf("%f", &c);
	if(a==b&&b==c&&a==c){
		printf("day la tam giac deu");
	
	}else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a){
		printf("day la tam giac vuong");
	}else if (a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a&&a==b||b==c||c==a){
		printf("day la tam giac vuong can ");
	}else if(a==b||b==c||c==a){
		printf("day la tam giac can");
	}
	else{
		printf("tam giac thuong");
	}
	
	
	/*if(a==b,a==c){
		printf("day la tam giac can");
	}
if(a*a+b*b==c*c,a*a+c*c==b*b,a*a==b*b+c*c){
		printf("day la tam giac vuong");
	}*/
	
	return 0;
}
