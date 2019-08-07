/*
Given a number N, find whether its nearest greater power of 2.
Input Size : N <= 1000
Sample Testcase :
INPUT
4
OUTPUT
8
*/

#include <iostream>

using namespace std;

int main()
{
  
  int num, ind;
  
  cin >> num;
  
  for(ind = 1; ind <= num; ind *= 2);
  
  cout << ind;
 
  return 0;
}
