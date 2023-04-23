#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    vector<int> balls(n);
    for (int i = 0; i < n; i++) 
    {
        balls[i] = i + 1;
    }
    
    for (int i = 0; i < m; i++) 
    {
        int a, b;
        cin >> a >> b;
        swap(balls[a-1], balls[b-1]);
    }
    
    for (int i = 0; i < n; i++) 
    {
        cout << balls[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}