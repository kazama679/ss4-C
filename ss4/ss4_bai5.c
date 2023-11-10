#include<stdio.h>

int main(){
	int a,b,c;
	printf("nhap ngay: ");
	scanf("%d",&a);
	printf("nhap thang: ");
	scanf("%d",&b);
	printf("nhap nam: ");
	scanf("%d",&c);
	if(c>0 && b>=1 && b<=12){
		switch(b){
			case 1: if(a<=31 && a>=1) printf("%d/%d/%d", a, b , c);
			break;
			case 3: if(a<=31 && a>=1) printf("%d/%d/%d", a, b , c);
			break;
			case 5: if(a<=31 && a>=1) printf("%d/%d/%d", a, b , c);
			break;
			case 7: if(a<=31 && a>=1) printf("%d/%d/%d", a, b , c);
			break;
			case 8: if(a<=31 && a>=1) printf("%d/%d/%d", a, b , c);
			break;
			case 10: if(a<=31 && a>=1) printf("%d/%d/%d", a, b , c);
			break;
			case 12: if(a<=31 && a>=1) printf("%d/%d/%d", a, b , c);
			break;
			case 4: if(a<=30 && a>=1) printf("%d/%d/%d", a, b , c);
			break;
			case 6: if(a<=30 && a>=1) printf("%d/%d/%d", a, b , c);
			break;
			case 9: if(a<=30 && a>=1) printf("%d/%d/%d", a, b , c);
			break;
			case 11: if(a<=30 && a>=1) printf("%d/%d/%d", a, b , c);
			break;
			case 2: if(c%4==0){
				if(a<=29 && a>=1) printf("%d/%d/%d", a, b , c);
			}
			else if(a<=28 && a>=1) printf("%d/%d/%d", a, b , c);
			break;
			}
		} 
	}
