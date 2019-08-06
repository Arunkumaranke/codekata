/*
Count the number of lines in a given paragraph.
Input Size : |s| <= 1000
Sample Testcase :
INPUT
Hello world.Goodbye
OUTPUT
2
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  int count = 1;
  
  getline(cin, str);
  
  for(int ind = 0; str[ind] != '\0'; ind++)
  {
      if(str[ind] == '.')
        count++;
  }
  
  cout << count;
  
  return 0;
}
