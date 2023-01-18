#include <string>
#include <vector>
using namespace std;

int solution(int hp)
{
	int ant = 0;

	while (hp)
	{
		if (hp >= 5)
		{
			hp -= 5;
			ant++;
		}

		if (hp >= 3 && hp < 5)
		{
			hp -= 3;
			ant++;
		}

		if (hp >= 1 && hp <3)
		{
			hp -= 1;
			ant++;
		}
	}

	return ant;
}