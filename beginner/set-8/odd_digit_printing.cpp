/*
Given a number N, print the odd digits in the number(space seperated).
Input Size : N <= 100000
Sample Testcase :
INPUT
2143
OUTPUT
1 3
*/

#include <iostream>

using namespace std;

int main()
{
  int num;
  int rev = 0, flag = 0;
  
  cin >> num ;
  
  while(num != 0)
  {
    rev = (rev * 10) + (num % 10);
    num /= 10;
  }
  
  while(rev != 0)
  {
    int digit = rev % 10;
    if(digit % 2 != 0)
    {
      cout << ( ( flag == 1 ) ? " " : "") << digit;
      flag = 1;
    }
    rev /= 10;
  }
  
  return 0;
}
