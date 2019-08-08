/*
Given an alphanumeric string, print all the numbers in the string.
Sample Testcase :
INPUT
5GUVI12
OUTPUT
512
*/

#include <iostream>

using namespace std;

int main()
{
  string str;
  
  cin >> str;
  
  for( int ind = 0; str[ind] != 0; ind++ )
  {
      if( str[ind] >= '0' && str[ind] <= '9')
        cout << str[ind];
  }
  
  return 0;
}
