/*
Given 2 numbers N and K followed by N numbers print the Kth odd number.
Sample Testcase :
INPUT
4 2
1 2 3 4
OUTPUT
3
*/

#include <iostream>

using namespace std;

int main()
{
  int size, count;
  
  cin >> size >> count;
  
  while(size != 0)
  {
      int num;
      cin >> num;
      if( num % 2 == 1)
      {
          if(count == 1)
            cout << num;
          count --;
      }
      size--;
  }
  
  return 0;
}
