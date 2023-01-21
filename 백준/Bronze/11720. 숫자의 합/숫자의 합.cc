#include<iostream>
using namespace std;

int main()
{
	int N;
	char num;
	int sum = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin>> num;
		sum += (num - '0');
	}

	cout << sum;

	return 0;
}