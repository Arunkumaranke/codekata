/*
Given a string S, print 2 strings one containing all characters in odd positions and 
other containing all characters in even positions.
Sample Testcase :
INPUT
XCODE
OUTPUT
XOE CD
*/

#include <iostream>

using namespace std;

int main()
{
  string str;
  string odd, even;
  
  cin >> str;
  
  for(int ind = 0; str[ind] !=0; ind++)
  {
    if( ind % 2 == 0 )
      odd.append(1, str[ind]);
    else
      even.append(1, str[ind]);
  }
  
  cout << odd << " " << even ;
  
  return 0;
}
