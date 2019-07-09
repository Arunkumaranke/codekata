#include <iostream>
using namespace std;

int main()
{
    int num, temp;
    int digits = 0, sum = 0;
    
    cin >> num;
    
    temp = num;
    
    while(temp)
    {
        temp /= 10;
        digits++;
    }
    
    temp = num;
    
    while( temp )
    {
        int digit = 1;
        for(int times = 0; times < digits; times++)
        {
            digit *= temp%10;
        }
        sum += digit;
        temp /= 10;
    }
    
    cout << ((sum==num) ? "yes":"no");
    
    return 0;
}
