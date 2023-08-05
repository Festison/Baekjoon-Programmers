#include <vector>
using namespace std;

int gcd(int a, int b) 
{
    if (b == 0)
    {
        return a;
    }
        return gcd(b, a % b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2)
{
    int lcm = denom1 * denom2 / gcd(denom1, denom2);
    int sumNumer = numer1 * (lcm / denom1) + numer2 * (lcm / denom2);
    int commonDivisor = gcd(sumNumer, lcm);
    
    vector<int> result = {sumNumer / commonDivisor, lcm / commonDivisor};
    
    return result;
}
