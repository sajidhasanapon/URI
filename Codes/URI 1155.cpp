
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	double S = 0, i;

	for ( i = 1; i <= 100; i++ )
	{
		S += 1 / i;
	}

	cout << fixed << setprecision ( 2 ) << S << endl;

	return 0;
}
