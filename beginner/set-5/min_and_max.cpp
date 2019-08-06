/*
Given a number N followed by N numbers find the  lowest and highest  number in the array.
Input Size : N <= 10000 
Sample Testcase :
INPUT
3
7 3 2
OUTPUT
2 7
*/

#include <iostream>
#include <climits>

using namespace std;

int main()
{
  int noOfElements;
  int min = INT_MAX, max = INT_MIN;
  
  cin >> noOfElements;
  
  while(noOfElements-- != 0)
  {
    int num;
    cin >> num;
    if (num > max) max = num;
    if (num < min) min = num;
  }
  
  cout << min << " " << max;
  
  return 0;
}
