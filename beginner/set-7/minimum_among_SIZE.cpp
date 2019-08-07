/*
Find the minimum among 10 numbers.
Sample Testcase :
INPUT
5 4 3 2 1 7 6 10 8 9
OUTPUT
1
*/

#include <iostream>
#include <climits>
#define SIZE 10

using namespace std;

int main()
{
  
  int size  = SIZE, min = INT_MAX;
  
  while( size != 0)
  {
      int num;
      
      cin >> num;
      
      if( num < min ) min = num;
      
      size--;
  }
  
  cout << min;
  
  return 0;
}
