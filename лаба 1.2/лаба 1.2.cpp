#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	double n, m;
	cout << " Vvedite n ";
	cin >> n;
	cout << " Vvedite m ";
	cin >> m;
	cout << " Znachenie virajeniya n+++m=" << n+ ++m;
	cout << " Znachenie virajeniya m-- >n=" << (m-- > n);
	cout << " Znachenie virajeniya n-- >m=" << (n-- > m);
	return 0;
}

