#include <iostream>
using namespace std;

int main()
{
    int fact, res = 1;
    
    cin >> fact;
    
    while(fact)
    {
        res *= fact;
        fact--;
    }
    cout << res;
    return 0;
}
