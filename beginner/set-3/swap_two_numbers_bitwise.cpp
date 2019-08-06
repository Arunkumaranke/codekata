/*
Write a program to swap 2 numbers using bitwise operators.
Sample Testcase :
INPUT
150 160
OUTPUT
160 150
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int num1, num2;
  
  cin >> num1 >> num2;
  
  num1 = num1 ^ num2;
  num2 = num1 ^ num2;
  num1 = num1 ^ num2;
  
  cout << num1 << " " << num2;
  
  return 0;
}
