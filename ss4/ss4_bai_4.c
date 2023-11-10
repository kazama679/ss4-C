#include<stdio.h>
int main(){
	int thang, nam; 
	printf("chon thang muon kiem tra? ");
	scanf("%d", &thang);
	printf("chon nam muon kiem tra? "); 
	scanf("%d", &nam);
	switch(thang){
		case 1:
		printf("31 ngày");
		break;
		case 2:
		if(nam %4==0 && nam%100!=0  ){
		printf("29 ngày");	
		} else{
			printf("28 ngay"); 
		} 
		break;
		case 3 :
		printf("31 ngày");
		break;
		case 4 :
		printf("30 ngày");
		break;
		case 5 :
		printf("31 ngày");
		break;
		case 7 :
		printf("31 ngày");
		break;
		case 8 :
		printf("31 ngày");
		break;
		case 10 :
		printf("31 ngày");
		break;
		case 12 :
		printf("31 ngày");
		break;
		case 6 :
		printf("30 ngày");
		break;
		case 9 :
		printf("30 ngày");
		break;
		case 11 :
		printf("30 ngày");
		break;
	}
} 
