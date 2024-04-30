// Q46. Program to get a string from user and make a copy of the string into another array with and without any inbuilt function
//with inbuilt function

#include<stdio.h>
#include<string.h>
void main(){
	char a[10],b[10];
	int i;
	printf("Enter a String:");
	gets(a);
	for(i=0; i<=strlen(a); i++){
		b[i]= a[i];
	}
	puts("Data of A");
	puts(a);
	puts("Data of b");
	puts(b);
	
}
