#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int number[5];
	int avg = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> number[i];
		avg += number[i]/5;
	}

	sort(number, number + 5);

	cout << avg << "\n" << number[2];

	return 0;
}