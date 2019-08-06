/*
Count the number of special characters in a given string.
Input Size : |s| <= 1000
Sample Testcase :
INPUT
Helloworld.123
OUTPUT
1
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  int count = 0;
  
  getline(cin, str);
  
  for(int ind = 0; str[ind] != '\0'; ind++)
  {
      if( str[ind] != ' ' && (str[ind] < '0' || str[ind] > '9') && (str[ind] < 'a' || str[ind] > 'z') && (str[ind] < 'A' || str[ind] > 'Z') )
        count++;
  }
  
  cout << count;
  
  return 0;
}
