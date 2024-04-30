#include <stdio.h>
#include <string.h>
 void main() {
 	char a[10];
 	int i;
 	printf("Enter a String :");
 	for(i=0;i<9; i++){
 		a[i] = getchar();
 		if (a[i]==10){
		 a[i]='\0';
		 break;
		 }
	 printf("\n You Have Entered :%c",a[i]);
	 }
	 
	 i=0;
	 while(a[i]='\0'){
	 	printf("%c",a[i]);
	 	i++;
	 }
 }
