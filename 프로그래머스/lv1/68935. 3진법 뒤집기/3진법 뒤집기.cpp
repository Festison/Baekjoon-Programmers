#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(int n) 
{
    vector<int> ter;
    
    while(n!=0)
    {
        ter.push_back(n%3);
        n/=3;
    }
    
    reverse(ter.begin(), ter.end());
    
    for(int i=0; i<ter.size(); i++)
    {
         n += pow(3, i) * ter[i];
    }
              
    return n;
}