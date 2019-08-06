/*
Given a number N find print fibonacci series of N numbers.
Sample Testcase :
INPUT
5
OUTPUT
1 1 2 3 5
*/

#include <iostream>
#include <climits>

#define SIZE 10

using namespace std;

int main()
{
  int num;
  int *arr;
  
  cin >> num;
  
  if(num == 0)
  {
    cout << 0;
  }
  else if(num > 0)
  {
    if(num == 1)
        cout << "1";
    else if(num == 2)
        cout << "1 1";
    else
    {
        arr = new int[num];
        arr[0] = 1;
        arr[1] = 1;
        cout << "1 1";
        for(int series = 2; series < num; series++)
        {
            arr[series] = arr[series-1] + arr[series-2];
            cout << " " << arr[series];
        }
    }
  }
  
  return 0;
}
