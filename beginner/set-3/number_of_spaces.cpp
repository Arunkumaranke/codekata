/*
Count the number of spaces in given line.
Input Size : |s| <= 1000
Sample Testcase :
INPUT
HH sadsd
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
      if(str[ind] == ' ')
        count++;
  }
  
  cout << count;
  
  return 0;
}
