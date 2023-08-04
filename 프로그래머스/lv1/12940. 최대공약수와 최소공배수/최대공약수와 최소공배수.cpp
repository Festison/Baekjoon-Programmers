#include <string>
#include <vector>
using namespace std;

// 유클리드의 호제법 사용
// (n,m) = (m,r) r은 나머지
// 최대 공약수
int gcd(int n, int m)
{
    if(m==0)
    {
        return n;
    }
    else
    {
        return gcd(m, n % m);
    }
}

// 최소 공배수
int lcm(int n, int m)
{
    return (n*m)/gcd(n, m);
}

vector<int> solution(int n, int m) 
{
    vector<int> answer;
    
    answer.push_back(gcd(n, m));
    answer.push_back(lcm(n, m));
        
    return answer;
}