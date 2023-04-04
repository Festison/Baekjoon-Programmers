 
#include <iostream>
#include <string>
using namespace std;
int main() {
    double n, t;
    string x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        getline(cin, x);
        for(int i = 0; i < x.size(); i++)
            switch (x[i])
            {
            case '@':
                n *= 3;
                break;
            case '#':
                n -= 7;
                break;
            case '%':
                n += 5;
                break;
            }
        printf("%.2f\n", n);
    }
}