/*
Given a number N, print the odd digits in the number(space seperated).
Input Size : N <= 100000
Sample Testcase :
INPUT
2143
OUTPUT
1 3
*/

#include <iostream>

using namespace std;

int main()
{
  int num;
  int arr[10], digit = 0, flag = 0;
  
  cin >> num ;
  
  while(num != 0)
  {
    arr[digit++] = num % 10;
    num /= 10;
  }
  
  for(int ind = digit-1; ind >= 0; ind--)
  {
      if( arr[ind] % 2 == 1)
      {
        cout << ( ( flag == 1 ) ? " " : ""  ) ;
        cout << arr[ind];
        flag = 1;
      }
  }
  
  return 0;
}
