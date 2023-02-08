#include<iostream>
using namespace std;

int room(int k, int n)
{
	if (k==0)
	{
		return n;
	}
	if (n==1)
	{
		return 1;
	}

	return (room(k - 1, n) + room(k, n - 1));
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int k, n, T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> k >> n;
		cout << room(k, n) << '\n';
	}
}