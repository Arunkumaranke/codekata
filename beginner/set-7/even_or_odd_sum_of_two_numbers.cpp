/*
Given 2 numbers N and M add it and check whether the result is odd or even.
Sample Testcase :
INPUT
9 2
OUTPUT
odd
*/

#include <iostream>

using namespace std;

int main()
{
  
  int num1, num2;
  
  cin >> num1 >> num2;
  
  cout << ( ( (num1 + num2) % 2 == 0) ? "even" : "odd" ) ;
 
  return 0;
}
