/*
Given a string S and a number N, print the last N characters in the string(in same order).
Sample Testcase :
INPUT
123 1
OUTPUT
3
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  int printLength;
  
  cin >> str >> printLength;
  
  for(int ind = str.length() - printLength; ind > -1 && str[ind] != '\0'; ind++)
  {
    cout << str[ind];
  }
  
  return 0;
}
