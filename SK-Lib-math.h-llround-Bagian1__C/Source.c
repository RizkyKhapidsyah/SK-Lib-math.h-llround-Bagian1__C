#include <stdio.h>      /* printf */
#include <math.h>       /* lround */
#include <conio.h>

int main() {
	printf("llround (2.3) = %lld\n", llround(2.3));
	printf("llround (3.8) = %lld\n", llround(3.8));
	printf("llround (-2.3) = %lld\n", llround(-2.3));
	printf("llround (-3.8) = %lld\n", llround(-3.8));
	_getch();
	return 0;
}