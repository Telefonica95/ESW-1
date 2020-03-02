#include <stdio.h>
#include "divide.h"
#include "modulo.h"
int main() {
	double a = 7;
	double b = 3;
	printf("modulo=%d\n", ex2_modulo(a, b));
	printf("divide=%f\n", ex2_divide(a, b));

	return 0;
}
