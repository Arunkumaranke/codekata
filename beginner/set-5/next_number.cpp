/*
Given a number N, print the next number.
Input Size : |N| <= 10000000
Sample Testcase :
INPUT
123
OUTPUT
124
*/

#include <iostream>

using namespace std;

int main()
{
  int num;
  
  cin >> num;
  
  cout << ++num;
  
  return 0;
}
