/*
Given a string S, print it after changing the middle element to * 
(if the length of the string is even, change the 2 middle elements to *).
Sample Testcase :
INPUT
hello
OUTPUT
he*lo
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  
  cin >> str;
  
  if(str.length() % 2 == 0)
    str[ ( str.length() / 2 ) - 1] = '*';
  
  str[str.length() / 2] = '*';

  cout << str;
  
  return 0;
}
