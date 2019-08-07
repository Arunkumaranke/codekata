/*
Given 3 Numbers A,B,C. Print (A*B)/C.
Input Size : |s| <= 1000
Sample Testcase :
INPUT
1 2 3
OUTPUT
0
*/

#include <iostream>

using namespace std;

int main()
{
  int num1, num2, num3;
  
  cin >> num1 >> num2 >> num3;
  
  cout << (num1*num2)/num3;
  
  return 0;
}
