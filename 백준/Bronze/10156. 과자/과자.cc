#include<iostream>
using namespace std;

int main()
{
	int K,N,M;
	cin >> K >> N >> M;
	int Money = K * N - M;

	if (Money<0)
	{
		Money = 0;
	}

	cout << Money;


	return 0;

}