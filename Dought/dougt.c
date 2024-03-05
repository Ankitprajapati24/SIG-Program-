#include <stdio.h>

void main(){
	int x = 3;
	int a = 0;
	x = (0 && 0) || (++a && 1);
	printf("%d,%d\n",x,a);
}
