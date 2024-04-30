// Q45. Program to get a string from user and print it'sreverse  with and without any inbuilt function
//with inbuilt function

#include<stdio.h>
#include<string.h>
void main(){
	char a[20];
	int i;
	printf("Enter a String:");
	gets(a);
	puts(strrev(a));
	
}
