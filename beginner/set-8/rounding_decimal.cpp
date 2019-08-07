/*
Given a decimal number(only 1 decimal place) round it off to nearest greater integer and print it.
Sample Testcase :
INPUT
2.6
OUTPUT
3
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  float num;
  
  cin >> num;
  
  if(num - (int)num != 0)
    num += 1;

  cout << (int)num;
  
  return 0;
}
