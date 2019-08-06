/*
Given 2 numbers N,M. Print whether the product of two numbers is even or odd.
Sample Testcase :
INPUT
12 3
OUTPUT
even
*/

#include <iostream>

using namespace std;

int main()
{
  int num1, num2;
  
  cin >> num1 >> num2;
  
  ( (num1 * num2) % 2 == 0) ? cout << "even" : cout << "odd" ;
  
  return 0;
}
