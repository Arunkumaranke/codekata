#include <iostream>
using namespace std;

int main(){
  int num;
  cin >> num;
  if(num > -1)
  {
    if( num % 2 )
    {
      cout << "odd";
    }
    else
    {
      cout << "even";
    }
  }
  else
  {
    cout << "invalid";
  }
  return 0;  
}
