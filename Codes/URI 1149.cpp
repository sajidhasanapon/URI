

#include <iostream>
using namespace std;

int main ()
{
	int A, N, sum = 0;
	cin >> A >> N;

	while ( N <= 0 ) cin >> N;

	while ( N-- )
	{
		sum += A;
		A++;
	}

	cout << sum << endl;

	return 0;
}
