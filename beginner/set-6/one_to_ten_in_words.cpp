/*
Given a number N, print it in words.
Input Size : 1 <= N <= 10
Sample Testcase :
INPUT
1
OUTPUT
One
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    
    cin >> num;
    
    switch(num)
    {
        case 1: cout << "One"; break;
        case 2: cout << "Two"; break;
        case 3: cout << "Three"; break;
        case 4: cout << "Four"; break;
        case 5: cout << "Five"; break;
        case 6: cout << "Six"; break;
        case 7: cout << "Seven"; break;
        case 8: cout << "Eight"; break;
        case 9: cout << "Nine"; break;
        case 10: cout << "Ten"; break;
    }
    
    return 0;
    
}
