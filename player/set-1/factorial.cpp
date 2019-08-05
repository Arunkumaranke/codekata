#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num, res = 1;
    
    cin >> num;
    
    while( num != 0 )
    {
        res *= num;
        num--;
    }
    
    cout << res;
    
    return 0;
}
