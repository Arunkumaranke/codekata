/*
Find the maximum among 10 numbers.
Sample Testcase :
INPUT
5 4 3 2 1 7 6 10 8 9
OUTPUT
10
*/

#include <iostream>
#include <climits>

#define SIZE 10

using namespace std;

int main()
{
  int size = SIZE;
  int max = INT_MIN;
  
  while(size != 0)
  {
      int num;
      cin >> num;
      if(max < num) max = num;
      size--;
  }
  
  cout << max;
  
  return 0;
}
