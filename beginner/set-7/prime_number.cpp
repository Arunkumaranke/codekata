/*
Given a number N, check whether it is prime.
Sample Testcase :
INPUT
123
OUTPUT
no
*/

#include <iostream>

using namespace std;

int main()
{
  int num, flag = 1;
  
  cin >> num;
  
  for(int divisor = 2; divisor <= (num/2); divisor++)
  {
      if( num % divisor == 0 )
      {
        flag = 0;
        break;
      }
  }
  
  cout << ( ( num > 1 && flag == 1 ) ? "yes" : "no" ) ;
  
  return 0;
}
