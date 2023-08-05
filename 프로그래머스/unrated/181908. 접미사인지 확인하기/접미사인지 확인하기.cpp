#include <string>
using namespace std;

int solution(string my_string, string is_suffix)
{
    if (is_suffix.size() > my_string.size())
    {
        return 0;
    }
    
    string suffix = my_string.substr(my_string.size() - is_suffix.size());
    
    if (suffix == is_suffix)
    {
        return 1;
    }
    else
    {
        return 0;
    }
        
}
