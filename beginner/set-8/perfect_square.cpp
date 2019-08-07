/*
Given 2 numbers N,M. Find their product and check whether it is a perfect square.
Sample Testcase :
INPUT
5 5
OUTPUT
yes
*/

#include <iostream>

using namespace std;

int main()
{
  int num1, num2, product, perfectSquare, count;
  
  cin >> num1 >> num2 ;
  
  product = num1*num2;
  
  for(perfectSquare = 1, count = 1; perfectSquare < product; count++, perfectSquare = count*count);
  
  cout << ( ( product == perfectSquare ) ? "yes" : "no");
  
  return 0;
}
