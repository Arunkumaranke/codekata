/*
Count the number of numeric digits in a number given.
Input Size : |N| <= 100000000000
Sample Testcase :
INPUT
123
OUTPUT
3
*/

#include <iostream>

using namespace std;

int main()
{
  int num, digit = 0;
  
  cin >> num;
  
  while(num)
  {
    digit++;
    num /= 10;
  }

  cout << digit;

  return 0;
}
