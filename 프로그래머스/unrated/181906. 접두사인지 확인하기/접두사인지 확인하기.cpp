#include <iostream>
#include <string>

using namespace std;

int solution(string my_string, string is_prefix) 
{
    int my_len = my_string.length();
    int prefix_len = is_prefix.length();

    // is_prefix가 my_string의 길이보다 길거나, my_string의 일부가 아니라면 0을 반환
    if (prefix_len > my_len || my_string.substr(0, prefix_len) != is_prefix)
    {
        return 0;
    }

    return 1;
}