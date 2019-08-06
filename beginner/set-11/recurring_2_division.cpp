/*
102 - Given a number N, print the number obtained by dividing it by 2 recursively till it is not divisible.
Input Size : 1 <= N <= 10
Sample Testcase :
INPUT
10
5
OUTPUT
3
3
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int num;
  
  cin >> num;
  
  while(num % 2 == 0)
  {
      num /= 2;
  }
  
  cout << num;
  
  return 0;
}
