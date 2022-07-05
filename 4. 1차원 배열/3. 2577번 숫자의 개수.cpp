#include<iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	int numbers[10] = { };
	int mul = A * B * C;

	while (mul != 0)
	{
		numbers[mul % 10]++;
		mul /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << numbers[i] << endl;
	}

	return 0;
	
}