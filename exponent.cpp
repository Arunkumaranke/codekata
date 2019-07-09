#include <iostream>
using namespace std;

int main()
{
    int base, power, res = 1;
    
    cin >> base >> power;
    
    while(power--)
    {
        res  *= base;
    }
    
    cout << res;
    
    return 0;
}
