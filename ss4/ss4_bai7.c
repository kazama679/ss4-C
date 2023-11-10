#include<stdio.h>
int main(){
	int a, b, ngay_cong=26;
	printf("nhap luong co ban? "); //luong cua 1 ngay 
	scanf("%u", &a);
	printf("nhap ngay cong thuc te? ") ;//phai nho hon 32 vi 1 thang k the co 32 ngay  
	scanf("%u", &b) ;
	if(ngay_cong<b){
		int ngay= b-ngay_cong ;// so ngay cong duoc thuong 
		int luong= (ngay_cong * a) + (ngay*(a*1.5));
		printf("luong cua ban la: %u", luong) ; 
	} else{
		int luong2= b*a;
		printf("luong cua ban la: %u", luong2) ;
	}
}
