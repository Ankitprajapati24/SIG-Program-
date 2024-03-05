#include <stdio.h>

void main(){
	int y;
	printf("Enter a Year : ");
	scanf("%d",&y);
	
	if(y%400 == 0){
		printf("%d is Leap Year",y);
		
		if(y%100 == 0){
			printf("%d is Leap Year",y);
			
			if(y%4 == 0){
				printf("%d is Leap Year",y);
			}	
	
		}
				
	}
	else{
		printf("%d is Non-Leap Year",y);
	}
	
	
}
