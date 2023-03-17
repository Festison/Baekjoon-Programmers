#include <iostream>

using namespace std;

int main() 
{

    int N;

    bool check[31] = {  };

    for (int i = 1; i <= 28; i++)
    {
        cin >> N;
        check[N] = 1;
    }

    for (int j = 1; j <= 30; j++) 
    {
        if (check[j] == 0) 
        {
            cout << j << "\n";
        }
    }

    return 0;
}
