#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num, res = 0;
    
    cin >> num;
    
    while( num != 0 )
    {
        res = (res * 10) + (num % 10);
        num /= 10;
    }
    
    cout << res;
    
    return 0;
}
