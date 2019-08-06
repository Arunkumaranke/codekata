/*
Write a program to concatenate two strings without using strcat() function.
Input Size : |s| <= 1000
Sample Testcase :
INPUT
hello world
OUTPUT
helloworld 
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str1, str2;
  
  cin >> str1 >> str2;
  
  str1.append(str2);
  
  cout << str1;
  
  return 0;
}
