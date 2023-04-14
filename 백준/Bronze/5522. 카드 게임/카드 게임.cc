#include<iostream>
using namespace std;

int main()
{
	int result = 0;
	int N;

	for (int i = 0; i <5; i++)
	{
		cin >> N;
		result += N;
	}

	cout << result;


	return 0;

}