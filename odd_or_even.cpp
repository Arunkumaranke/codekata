#include <iostream>
using namespace std;

int main(){
  int num;
  cin >> num;
  if(num > -1)
  {
    if( num % 2 )
    {
      cout << "Odd";
    }
    else
    {
      cout << "Even";
    }
  }
  else
  {
    cout << "invalid";
  }
  return 0;  
}
