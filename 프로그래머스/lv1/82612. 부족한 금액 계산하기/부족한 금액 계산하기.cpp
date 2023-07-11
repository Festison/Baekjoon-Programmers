using namespace std;

long long solution(int price, int money, int count) // 원래 이용료, 자신이 가지고 있는 금액, 탄 횟수 
{
    long long answer = -1;
    long long sum=0;
    
     for(int i=1; i<=count; i++)
    {
        sum+=i*price;
    }
    
    if(sum>money)
    {
        answer=sum-money;
    }
    else if(sum=money)
    {
        answer=0;
    }
    
    return answer;
}