/*
Given a number N, print the sum of all its digits.
Sample Testcase :
INPUT
123
OUTPUT
6
*/

#include <iostream>

using namespace std;

int main()
{
  int num, sum = 0;
  
  cin >> num;
  
  while(num != 0)
  {
    sum += (num % 10);
    num /= 10;
  }
  
  cout << sum;
  
  return 0;
}
