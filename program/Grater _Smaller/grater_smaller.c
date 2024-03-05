#include <stdio.h>

void main(){
	int a,b,c;
	
	printf("Enter Value of A  :");
	scanf("%d",&a);
	
	printf("Enter Value of B :");
	scanf("%d",&b);
	
	printf("Enter Value of C :");
	scanf("%d",&c);
	
	

	if(a>b){
		printf("%d is Grater than %d",a,b);
		
		if(b>c){
			printf("%d is Grater than %d",b,c);	
		}
		
		
	}
	else if(a<b) {
		printf("%d is Smaller than %d",a,b);
		
		if(b<c){
			printf("\n%d is Smaller than %d",b,c);
			
		}
	}
	
}
