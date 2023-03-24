#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int count = 0;
    int number = 666;

    while (count < N) 
    {
        if (to_string(number).find("666") != string::npos)
        {
            count++;
        }
        number++;
    }

    cout << number - 1 << endl;
    
    return 0;
}