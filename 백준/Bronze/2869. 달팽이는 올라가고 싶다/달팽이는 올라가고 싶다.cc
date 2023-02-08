#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int A, B, V;
	cin >> A >> B >> V;

	int day;
	day = (V - B - 1) / (A - B) + 1;
	cout << day << "\n";	

	return 0;
}