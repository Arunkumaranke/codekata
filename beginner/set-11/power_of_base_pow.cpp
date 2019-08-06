/*
Given 2 numbers N,K. Print N^K.
Sample Testcase :
INPUT
12 3
OUTPUT
1728
*/

#include <iostream>

using namespace std;

int main()
{
  int base, power, res = 1;
  
  cin >> base >> power;
  
  while(power > 0)
  {
    res *= base;
    power--;
  }
  
  cout << res;
  
  return 0;
}
