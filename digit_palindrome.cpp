#include <iostream>
using namespace std;

int main()
{
    int num, digit = 0, flag = 1;
    int numArr[100];
    
    cin >> num;
    
    while(num)
    {
        numArr[digit] = num%10;
        digit++;
        num /= 10;
    }
    
    for(int ind = 0; ind < digit/2; ind++)
    {
        if(numArr[ind] != numArr[digit-1-ind])
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
