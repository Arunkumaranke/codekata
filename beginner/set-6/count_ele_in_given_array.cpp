/*
Given 2 numbers N and K followed by n numbers print the number of repetitions of K.
Sample Testcase :
INPUT
4 3
1 2 3 3
OUTPUT
2
*/

#include <iostream>

using namespace std;

int main()
{
  int noOfElements, key, keyCount = 0;
  
  cin >> noOfElements >> key;
  
  while( noOfElements != 0 )
  {
    int num;
    
    cin >> num;
    
    if(num == key) keyCount++;
    
    noOfElements--;
  }
  
  cout << keyCount;
  
  return 0;
}
