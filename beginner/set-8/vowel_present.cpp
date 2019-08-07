/*
Given a string S, check whether it has a vowel in it. Print yes/no.
Sample Testcase :
INPUT
btabb
OUTPUT
yes
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  int flag = 0;
  
  cin >> str;
  
  for(int ind = 0; str[ind] != 0; ind++)
  {
      switch(str[ind])
      {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            flag = 1;
      }
      if(flag) break;
  }
  cout << ( (flag == 1) ? "yes" : "no" );
  return 0;
}
