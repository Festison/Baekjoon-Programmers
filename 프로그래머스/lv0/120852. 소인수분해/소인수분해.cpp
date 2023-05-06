#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int cnt=2;
    
    while(1){
        bool check=false;
        while(1){
            if(n%cnt==0){
                n/=cnt;
                check=true;
            }
                
            else if(n%cnt!=0 && check){
                answer.push_back(cnt);
                break;
            }
            
            else if(n%cnt!=0 && !check) break;
        }
        
        if(n==1) break;
        
        cnt++;
    }
    
    return answer;
}