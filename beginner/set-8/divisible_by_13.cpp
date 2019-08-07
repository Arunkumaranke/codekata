/*
Given a number N, find whether it is a multiple of 13.
Sample Testcase :
INPUT
26
OUTPUT
yes
*/

#include <iostream>

using namespace std;

int main()
{
  int num;
  
  cin >> num;
  
  cout << ( (num % 13 == 0) ? "yes" : "no" );
  
  return 0;
}
