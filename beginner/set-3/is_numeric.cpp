/*
27 - Validate if a given string is numeric.
Sample Testcase :
INPUT
2
OUTPUT
Yes 
*/

#include <iostream>

using namespace std;

int main()
{
  string str;
  int flag = 1;
  
  cin >> str;
  
  for( unsigned ind = 0; ind < str.length(); ind++ )
  {
      if(str.at(ind) < 48 || str.at(ind) > 57 )
      {
          if(str.at(ind) == '.' && ind != 0)
            continue;
          flag = 0;
      }
  }
  
  ( flag == 1 ) ? cout << "Yes" : cout << "No" ;
  
  return 0;
  
}
