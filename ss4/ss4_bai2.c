#include<stdio.h>
int main(){
	float a, b, c;
	printf("nhap canh thu nhat? ");
	scanf("%u", &a) ;
	printf("nhap canh thu hai? ") ;
	scanf("%u", &b) ;
	printf("nhap canh thu ba? ") ;
	scanf("%u", &c);
	if(a==b&&b==c&&a==c) {
		printf("la tam giac deu") ;
	}
	else if(a==b||b==c||a==c) {
		printf("la tam giac can") ;
	}
	else if((a*a)+(b*b)==c*c||(a*a)+(c*c)==b*b||(b*b)+(c*c)==a*a) {
		printf("la tam giac vuong") ;
	}
	else if((a*a)+(b*b)==c*c||(a*a)+(c*c)==b*b||(b*b)+(c*c)==a*a&&a==b||b==c||a==c) {
		printf("la tam giac vuong can") ;
	}
	else if(a+b>c||a+c>b||b+c>a){
		printf("la tam giac thuong") ;
	}	 
}
