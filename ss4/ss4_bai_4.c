#include<stdio.h>
int main(){
	int thang, nam; 
	printf("chon thang muon kiem tra? ");
	scanf("%d", &thang);
	printf("chon nam muon kiem tra? "); 
	scanf("%d", &nam);
	switch(thang){
		case 1:
		printf("31 ng�y");
		break;
		case 2:
		if(nam %4==0 && nam%100!=0  ){
		printf("29 ng�y");	
		} else{
			printf("28 ngay"); 
		} 
		break;
		case 3 :
		printf("31 ng�y");
		break;
		case 4 :
		printf("30 ng�y");
		break;
		case 5 :
		printf("31 ng�y");
		break;
		case 7 :
		printf("31 ng�y");
		break;
		case 8 :
		printf("31 ng�y");
		break;
		case 10 :
		printf("31 ng�y");
		break;
		case 12 :
		printf("31 ng�y");
		break;
		case 6 :
		printf("30 ng�y");
		break;
		case 9 :
		printf("30 ng�y");
		break;
		case 11 :
		printf("30 ng�y");
		break;
	}
} 
