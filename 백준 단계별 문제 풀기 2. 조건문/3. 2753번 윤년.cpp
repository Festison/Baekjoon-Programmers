#include<iostream>
using namespace std;

int main()
{
	int year;
	cin >> year;

	//���� 4�ǹ���̰� 100����� �ƴҋ� �Ǵ� 400�ǹ���ϋ� 
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