/*
71 - Given a string S, check if it is a palindrome. Print yes/no.
Sample Testcase :
INPUT
lappal
OUTPUT
yes
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  unsigned ind;
  
  cin >> str;
  
  for(ind = 0; ind < str.length()/2; ind++)
  {
      if(str[ind] != str[str.length() - 1 - ind])
        break;
  }
  cout << ( (ind == str.length()/2 ) ? "yes" : "no" );
  return 0;
}
