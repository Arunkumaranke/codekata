/*
Validate if a given string is numeric.
Sample Testcase :
INPUT
2
OUTPUT
Yes
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  bool flag = true;
  string str;
  
  cin >> str;
  
  for( unsigned ind = 0; ind < str.length(); ind++ )
  {
    if(str.at(ind) <= 48 && str.at(ind) >= 57) 
    {
      flag = false;
      break;
    }
  }
  
  ( flag ) ? cout << "yes" : cout << "no" ;
  
  return 0;
}
