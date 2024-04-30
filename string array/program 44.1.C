// Program to get a string from user and print it's length with and without any inbuilt function
//with inbuilt function

#include<stdio.h>
#include<string.h>
void main(){
	char a[20];
	int i;
	printf("Enter a String:");
	scanf("%s",a);
	
	printf("Length of String is : %d",strlen(a));
}
