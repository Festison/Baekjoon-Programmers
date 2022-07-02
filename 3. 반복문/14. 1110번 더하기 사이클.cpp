#include <iostream>
using namespace std;

int main()
{
	int N;
	int count = 0;
	int num, temp;
	cin >> N;
	num = N;

	while (true) 
	{
		temp = (N % 10) * 10 + (N / 10 + N % 10) % 10;
		count++;
		N = temp;
		if (temp == num)
			break;
	}
	cout << count << '\n';
	return 0;
}