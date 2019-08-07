/*
Given a string S and a number K, print the first K characters.
Sample Testcase :
INPUT
laptop 3
OUTPUT
lap
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string word;
  int printCount;
  
  cin >> word >> printCount;
  
  for(int ind = 0; ind < printCount; ind++)
      cout << word.at(ind);
  
  return 0;
}
