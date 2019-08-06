/* 
Write a program to compare two strings without using strcmp() function, print the greater string or if equal print any one string.
Input Size : |s| <= 1000
Sample Testcase :
INPUT
hello world
OUTPUT
world
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string input1, input2;
  cin >> input1 >> input2;
  
  (input1.length() > input2.length()) ? cout << input1 : cout << input2;
  return 0;
}
