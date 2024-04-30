// Q45. Program to get a string from user and print it'sreverse  with and without any inbuilt function
//without inbuilt function

#include<stdio.h>
#include<string.h>
void main(){
	char a[20];
	int i;
	printf("Enter a String:");
	gets(a);
	for(i=strlen(a)-1;i>=0;i--){
		printf("%c",a[i]);
	}
}
