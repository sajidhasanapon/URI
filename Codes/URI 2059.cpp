
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int p, j1, j2, r, a;
	cin >> p >> j1 >> j2 >> r >> a;

	if ( r & a ) cout << "Jogador 2 ganha!" << endl;

	else if ( r + a == 0 )
	{
		if ( ( p + j1 + j2 ) % 2 != 0 ) cout << "Jogador 1 ganha!" << endl;

		else cout << "Jogador 2 ganha!" << endl;
	}

	else cout << "Jogador 1 ganha!" << endl;

	return 0;
}
