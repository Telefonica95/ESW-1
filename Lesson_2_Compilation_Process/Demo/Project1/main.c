#include <stdio.h>
#include "calculate.h"
int main(void) {
	puts("Here I Am!!!");

	int a = 17;
	int b = a++;
	printf("a:%d b:%d\nsum:%d\n", a, b, add(a,b));

	return 0;

}