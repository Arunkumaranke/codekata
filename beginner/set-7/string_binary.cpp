/*
Given a string S, check whether it is in binary representation.
Sample Testcase :
INPUT
1100101
OUTPUT
yes
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  int ind = 0;
  
  cin >> str ;
  
  while( str[ind] != 0 )
  {
      if( str[ind] != '0' && str[ind] != '1' )
        break;
      ind++;
  }
  
  cout << ( ( str[ind] == 0 ) ?  "yes" : "no" );
  
  return 0;
}
