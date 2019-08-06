/*
41 - Given a string S and a number K, print the string K times.
Sample Testcase :
INPUT
laptop 3
OUTPUT
laptop
laptop
laptop
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  int num;
  
  cin >> str >> num;
  
  while(num-- != 0)
    cout << str << "\n";
  
  return 0;
}
