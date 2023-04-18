#include<iostream>
#include <algorithm>
using namespace std;


int d1, d2, d3;

int main()
{
	cin >> d1 >> d2 >> d3;

	if (d1 == d2 && d2 == d3)
	{
		cout << 10000 + d1 * 1000;

	}
	else if (d1 == d2 || d1 == d3)
	{
		cout << 1000 + d1 * 100;
	}
	else if (d2 == d3)
	{
		cout << 1000 + d2 * 100;
	}
	else
	{
		cout << max({ d1, d2,d3 }) * 100;
	}

	return 0;
}