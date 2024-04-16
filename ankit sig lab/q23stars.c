//Q23.1 star piramid
#include<stdio.h>

void main(){
	int i,j,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Here is your satr's \n");
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");		
	}
	
}
