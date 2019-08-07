/*
Given a number N, find a nearest greater multiple of 10.
Input Size : n <= 10000
Sample Testcase :
INPUT
3
OUTPUT
10
*/

#include <iostream>

using namespace std;

int main()
{
  int num;
  
  cin >> num;
  
  cout << ( (num / 10) + 1 ) *10;
  
  return 0;
}
