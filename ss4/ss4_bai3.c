#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("nhap vao chi so cu:");
	scanf("%d",&a);
	printf("nhap vao chi so moi:");
	scanf("%d",&b);
	c=b-a;
	if(0<=c<50){
		d=10000;
	}else if(50<=c<100){
		d=15000;
	}else if(100<=c<150){
		d=20000;
	}else if(150<=c<200){
		d=25000;
	}else if(c>=200){
		d=30000;
	}
	e=c*d;
	printf("thang nay ban mat %d tien dien",e);
}
