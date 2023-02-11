#include<iostream>
using namespace std;
 
int Factorial(int num)
{
    int result = 1;
    
    if(num == 0) 
    {
        return 1;
    }
    
    for(int i=num; i>=1 ; i--)
    {
        result *= i;
    }
 
    return result;
}
 
 
int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    
    int N, K;
 
    cin >> N >> K;
 
    cout << Factorial(N) / (Factorial(K) * Factorial(N-K));
    
    return 0;    
}