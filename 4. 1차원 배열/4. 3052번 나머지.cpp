#include<iostream>
using namespace std;

int main()
{
	int A;
	int B[42] = {};
	int count = 0;
	for (int i = 0; i <10 ; i++)
	{
		cin >> A;
		B[A % 42]++;
	}
	
	for (int i = 0; i < 42; i++)
	{
		if (B[i] != 0)
		{
			count++;
		}

	}

	cout << count;

	return 0;

}