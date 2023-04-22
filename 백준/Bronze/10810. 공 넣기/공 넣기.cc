#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    vector<int> basket(n + 1, 0);

    for (int i = 0; i < m; i++) 
    {
        int from, to, ball;
        cin >> from >> to >> ball;

        for (int j = from; j <= to; j++) 
        {
            basket[j] = ball;
        }
    }

    for (int i = 1; i <= n; i++) 
    {
        cout << basket[i] << ' ';
    }
    cout << '\n';

    return 0;
}