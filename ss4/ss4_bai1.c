#include<stdio.h>
int main(){
	int number;
	printf("vui long nhap so muon kiem tra? ");
	scanf("%d", &number);
	if(number % 3 ==0 && number % 5 == 0){
		printf("%d la so chia het cho 5 va 3",number);
	} else{
		printf("%d khong la so chia het cho 5 va 3",number);
	}
}
