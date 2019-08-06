/*
Given 2 numbers N and K followed by n numbers check if K exists.
Sample Testcase :
INPUT
4 2
1 2 3 3
OUTPUT
yes
*/

#include <iostream>

using namespace std;

int main()
{
  int noOfElements, key;
  int keyFound = 0;
  
  cin >> noOfElements >> key;
  
  while(noOfElements != 0)
  {
    int num;
    
    cin >> num;
    
    if(num == key)
    {
        keyFound = 1;
        break;
    }
    
    noOfElements--;
  }
  
  cout << ( (keyFound) ? "Yes" : "No" );
  
  return 0;
}
