#include <iostream>
using namespace std;

int main()
{
    int number;
    int digit = 0;
    
    cin >> number;
    
    while(number)
    {
        digit++;
        number /= 10;
    }
    
    cout << digit;
    
    return 0;
}
