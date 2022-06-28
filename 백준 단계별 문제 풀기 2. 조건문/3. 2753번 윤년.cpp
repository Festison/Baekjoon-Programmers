#include<iostream>
using namespace std;

int main()
{
	int year;
	cin >> year;

	//윤년 4의배수이고 100배수가 아닐떄 또는 400의배수일떄 
	// 4 and 100 != or 400 

	if (year%4==0 && year%100!=0 || year%400==0)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}


	return 0;

}