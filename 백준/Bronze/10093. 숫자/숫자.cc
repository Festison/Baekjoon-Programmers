#include <iostream>
using namespace std;

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	unsigned long long A = 0, B = 0;
	cin >> A >> B;

	if (A > B) 
	{
		unsigned long long tmp = B;
		B = A;
		A = tmp;
	}

	if (A == B) 
	{
		cout << 0 << '\n';
	}
	else 
	{
		cout << B - A - 1 << '\n';

		for (unsigned long long i = A + 1; i < B; i++) 
		{
			if (i == B - 1)
			{
				cout << i;
			}
			else
			{
				cout << i << " ";
			}
		}
	}

	return 0;
}