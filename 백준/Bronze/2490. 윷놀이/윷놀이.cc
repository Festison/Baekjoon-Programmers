#include <iostream>
using namespace std;

int main() 
{

	for (int i = 0; i < 3; i++) 
	{ 
		int result = 0;

		for (int j = 0; j < 4; j++) 
		{ 
			int input;
			cin >> input;

			if (input == 0) 
			{  
				result++;
			}
		}

		switch (result)
		{
		case 1:
			cout << 'A' << "\n";
			break;
		case 2:
			cout << 'B' << "\n";
			break;
		case 3:
			cout << 'C' << "\n";
			break;
		case 4:
			cout << 'D' << "\n";
			break;
		case 0:
			cout << 'E' << "\n";
			break;
		}
	}

	return 0;
}