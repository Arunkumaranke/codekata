/*
Given 2 numbers N and K followed by N numbers print the Kth smallest number.
Sample Testcase :
INPUT
4 2
1 2 3 4
OUTPUT
2
*/

#include <iostream>

using namespace std;

int main()
{
  int size, *arr, k;
  
  cin >> size >> k;
  
  arr = new int[size];
  
  for(int ind = 0; ind < size; ind++)
    cin >> arr[ind];

  for(int ind = 0; ind < k; ind++)
  {
      for(int innerInd = ind+1; innerInd < size; innerInd++)
      {
          if(arr[ind] > arr[innerInd])
          {
              int temp = arr[ind];
              arr[ind] = arr[innerInd];
              arr[innerInd] = temp;
          }
      }
  }
  
  cout << arr[k-1];
  
  return 0;
}
