/*
Given a number N followed by N numbers print the average(integer) of the N numbers.
Sample Testcase :
INPUT
5
1 2 3 4 5
OUTPUT
3
*/

#include <iostream>

using namespace std;

int main()
{
  int noOfElements, sum = 0, avg, ind = 0;;
  
  cin >> noOfElements;
  
  while (ind++ != noOfElements)
  {
    int num;
    cin >> num;
    sum += num;
  }
  
  avg = sum / noOfElements;
  
  cout << avg;
  
  return 0;
}
