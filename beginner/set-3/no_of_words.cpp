/*
Count the number of words in given line.
Input Size : |s| <= 1000
Sample Testcase :
INPUT
Hello world
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
      if(str[ind] == ' ')
        count++;
  }
  
  cout << count;
  
  return 0;
}
