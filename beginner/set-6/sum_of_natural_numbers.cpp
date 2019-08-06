/*
Write a program to print the sum of the first K natural numbers.
Input Size : n <= 100000
Sample Testcase :
INPUT
3
OUTPUT
6
*/

#include <iostream>

using namespace std;

int main()
{
  int num;
  
  cin >> num;
  
  cout << (num*(num+1))/2;
  
  return 0;
}
