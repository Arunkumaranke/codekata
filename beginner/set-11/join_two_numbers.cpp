/*
Given 2 numbers N and K join it and print.
Sample Testcase :
INPUT
123 456
OUTPUT
123456
*/

#include <iostream>

using namespace std;

int main()
{
  int num1, num2, temp;
  
  cin >> num1 >> num2;
  temp = num2;
  
  if(num2 == 0) num1 *= 10;
  
  while(temp > 0)
  {
    num1 *= 10;
    temp /= 10;
  }
  
  num1 += num2;
  
  cout << num1;
  
  return 0;
}
