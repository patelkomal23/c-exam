//print a below pattern using nested for loop in c language
#include<stdio.h>
main(){
//11
//12 13
//14 15 16
//17 18 19 20
//21 22 23 24 25
	int i,j,num=11;
	for(i=1; i<6; i++){
		for(j=1; j<=i; j++){
			printf(" %d ",num);
			num++;
		}
		printf("\n");	
	}
}
