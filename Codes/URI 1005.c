
#include <stdio.h>

int main()
{
	double a, b;
	scanf ( "%lf %lf", &a, &b );

	printf ( "MEDIA = %.5lf\n", ( 3.5 * a + 7.5 * b ) / ( 3.5 + 7.5 ) );

	return 0;
}
