#include <iostream>
using namespace std;

int main()
{
    int num, flag = 1;
    cin >> num;
    
    for(int divisor = 2; divisor <= num/2; divisor++)
    {
        if(num%divisor == 0)
        {
            flag = 0;
            break;
        }
    }
    
    if(flag)
        cout << "yes";
    else
        cout << "no";
    
    return 0;
}
