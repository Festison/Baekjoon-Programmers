#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool compare(string x, string y)
{
	if (x.length()==y.length())
	{
		return x < y;
	}
	else
	{
		return x.length() < y.length();
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;
	vector<string> word(N);

	for (int i = 0; i < N; i++)
	{
		cin >> word[i];
	}

	sort(word.begin(), word.end(), compare);
	
	cout << word[0] << '\n';

	for (int i = 1; i < N; i++)
	{
		if (word[i] != word[i - 1])
		{
			cout << word[i] << '\n';
		}
	}
}