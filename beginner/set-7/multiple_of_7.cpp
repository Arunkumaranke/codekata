/*
Given a number N, find whether it is a multiple of 7.
Sample Testcase :
INPUT
14
OUTPUT
yes
*/

#include <iostream>

using namespace std;

int main()
{
  int num;
  
  cin >> num;
  
  cout << ( ( num % 7 == 0 ) ? "yes" : "no" );
  
  return 0;
}
