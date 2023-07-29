#include <string>
#include <vector>
using namespace std;

int concat(int a, int b) 
{
    int temp = b;
    while (temp > 0) 
    {
        a *= 10;
        temp /= 10;
    }
    return a + b;
}

int solution(int a, int b)
{
    int abConcat = concat(a, b);
    int twiceProduct = 2 * a * b;

    if (abConcat >= twiceProduct)
        return abConcat;
    else
        return twiceProduct;
}
