#include <iostream>
using namespace std;
 
int main() 
{
    long long S;
    int num = 1;
    int N = 0;
    long long sum = 0;
    
    cin >> S;
    
    while(1)
    {
        sum += num;
        N++;
        if(sum > S)
        {
            N--;
            break;
        }
        num++;
    }
    
    cout << N << endl;
    
    return 0;
    
}