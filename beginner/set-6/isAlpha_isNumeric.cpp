/*
Given a string S, check if it contains both alphabets and numbers.
Input Size :  |s| <= 1000
Sample Testcase :
INPUT
Helloworld.123
OUTPUT
Yes
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  int alphaPresent = 0, numberPresent = 0;
  
  cin >> str;
  
  for(int ind = 0; str[ind] != '\0'; ind++)
  {
    if(str[ind] >= 'a' && str[ind] <= 'z')
        alphaPresent = 1;
    if(str[ind] >= '0' && str[ind] <= '9')
        numberPresent = 1;
    if(alphaPresent && numberPresent)
        break;
  }
  
  cout << (( alphaPresent && numberPresent ) ? "Yes" : "No" );
  
  return 0;
}
