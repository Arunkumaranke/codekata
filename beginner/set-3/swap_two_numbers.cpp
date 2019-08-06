/*
Write a program to swap 2 numbers.
Input Size : n <= 100000 
Sample Testcase :
INPUT
37 73
OUTPUT
73 37
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int num1, num2;
  
  cin >> num1 >> num2;
  
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;
  
  cout << num1 << " " << num2;
  
  return 0;
}
