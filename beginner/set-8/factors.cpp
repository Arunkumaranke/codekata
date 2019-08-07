/*
Given a number N, print its factors.
Input Size : n<=1000 
Sample Testcase :
INPUT
6
OUTPUT
1 2 3 6
*/

#include <iostream>

using namespace std;

int main()
{
  int num, divisor;
  
  cin >> num;
  
  cout << 1;
  
  for(divisor = 2; divisor <= num; divisor++)
  {
      if(num % divisor == 0)
        cout << " " << divisor; 
  }
  
  return 0;
}
