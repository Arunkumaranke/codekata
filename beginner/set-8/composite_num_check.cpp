/*
Given a number N, check whether it is composite.
Sample Testcase :
INPUT
123
OUTPUT
yes
*/

#include <iostream>

using namespace std;

int main()
{
  int num, divisor;
  
  cin >> num;
  
  for(divisor = 2; divisor < num; divisor++)
  {
      if(num % divisor == 0)
        break;
  }
  
  cout << ( ( divisor < num ) ? "yes" : "no" );
  
  return 0;
}
