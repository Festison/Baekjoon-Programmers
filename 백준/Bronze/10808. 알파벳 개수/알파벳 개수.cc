#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int arr[26] = {};
	string S;
	cin >> S;

	for (int i = 0; i < S.length(); i++)
	{
		arr[S[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}