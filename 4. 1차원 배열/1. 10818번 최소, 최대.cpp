#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int array[5];

	int min = 100;
	int max = -100;

	for (int i = 0; i < N; i++)
	{
		cin >> array[i];
		if (max < array[i]) max = array[i];
		if (min > array[i]) min = array[i];	
	}

	cout << min << " " << max;

	return 0;
}