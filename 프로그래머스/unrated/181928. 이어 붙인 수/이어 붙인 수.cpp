#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    string odd_str;
    string even_str;

    for (int num : num_list) 
    {
        if (num % 2 == 0)
        {
            even_str += to_string(num);
        } 
        else
        {
            odd_str += to_string(num);
        }
    }

    int odd_sum = stoi(odd_str);
    int even_sum = stoi(even_str);

    return odd_sum + even_sum;
}