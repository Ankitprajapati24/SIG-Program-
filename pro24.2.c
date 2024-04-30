// Program to get a string from user and print the same without any inbuilt function

#include<stdio.h>
#include<string.h>
void main(){
	char a[20];
	int i;
	printf("Enter a String:");
	scanf("%s",a);
	
	while(a[i]!='\0'){
		i++;
	}
	printf("%s",a);
}
