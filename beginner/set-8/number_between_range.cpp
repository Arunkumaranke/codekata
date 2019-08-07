/*
Given a number N and 2 numbers L and R. Check whether N is between L and R. Print yes/no.
Sample Testcase :
INPUT
3
2 6
OUTPUT
yes
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int left, right, num;
  
  cin >> num >> left >> right;
  
  cout << ( (num > left && num < right) ? "yes" : "no" ); 
  
  return 0;
}
