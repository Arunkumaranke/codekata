/*
Given 2 numbers N,M. Find their difference and check whether it is even or odd.
Sample Testcase :
INPUT
5 5
OUTPUT
even
*/

#include <iostream>

using namespace std;

int main()
{
  
  int num1, num2;
  
  cin >> num1 >> num2;
  
  cout << ( ( (num1 - num2) % 2 == 0) ? "even" : "odd" ) ;
 
  return 0;
}
