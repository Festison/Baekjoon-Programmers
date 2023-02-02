#include <iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int result=0;

	if (N==1)
	{
		result = 1;
	}

	for (int i = 2; i <=N; result++)
	{
		i += 6 * result;
	}

	cout << result;

	return 0;
}