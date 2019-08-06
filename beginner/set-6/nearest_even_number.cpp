/*
Given a number N, print the nearest even number which is less than or equal to N.
Sample Testcase :
INPUT
123
OUTPUT
122
*/

#include <iostream>

using namespace std;

int main()
{
  int num;
  
  cin >> num;
  
  ( num % 2== 0 ) ? cout << num : cout << num - 1 ;
  
  return 0;
}
