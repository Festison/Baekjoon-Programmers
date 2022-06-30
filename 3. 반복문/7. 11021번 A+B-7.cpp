#include<iostream>
using namespace std;

int main()
{
	int A, B, T;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> A >> B;
		for (int j = 0; j < 1; j++)
		{
			cout << "Case #" << i << ": " << A + B << endl;
		}
		
	}

	return 0;
}