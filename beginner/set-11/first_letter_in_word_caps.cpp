/*

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  
  getline(cin, str);
  
  for(int ind = 0; str[ind] != 0 ; ind++)
  {
    if(ind == 0 || str[ind - 1] == ' ')
    {
      if( str[ind] >= 'a' && str[ind] <= 'z' )
        str[ind] -= 32;
    }
  }
  
  cout << str;
  
  return 0;
}
