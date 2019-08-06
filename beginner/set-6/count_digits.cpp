/*
Count number of digits of an integer.
Sample Testcases :
INPUT
548
OUTPUT
3
*/

#include <iostream>

using namespace std;

int main()
{
  int num, digit;
  
  cin >> num;
  digit = ( num == 0 ); 
  
  while(num != 0)
  {
    digit++;
    num /= 10;
  }
  
  cout << digit;
  
  return 0;
}
