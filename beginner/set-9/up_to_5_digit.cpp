/*
Given length L and breadth B of a farm, print the area of the farm upto 5 decimal decimals
(print the answer upto 5 decimal places).
Sample Testcase :
INPUT
1.626 2.31
OUTPUT
3.75606
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  float num1, num2;
  
  cin >> num1 >> num2;
  
  printf( "%.5f", num1*num2 );
  
  return 0;
}
