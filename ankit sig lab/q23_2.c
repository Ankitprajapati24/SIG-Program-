//Q23.2 revers star piramid
#include<stdio.h>

void main(){
	int i,j,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Here is your satr's \n");
	
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");		
	}
	
}

