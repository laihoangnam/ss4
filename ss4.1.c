#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("nhap a:");
	scanf("%d", &a);
	if(a%15==0){
		printf("so nay chia het cho ca 3 va 5");
	}
	else{
		printf("so nay khong chia het cho ca 3 va 5");
	}
	return 0;
}
