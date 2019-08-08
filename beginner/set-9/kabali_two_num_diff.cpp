/*
Kabali is a brave warrior who with his group of young ninjas moves from one place to another to fight against his opponents.
Before Fighting he just calculates one thing, the difference between his ninja number and the opponent's ninja number. 
From this difference he decides whether to fight or not. Kabali's ninja number is never greater than his opponent.

INPUT 1:
10 12
OUTPUT 1:
2

INPUT 2:
10 14
OUTPUT 2:
4

INPUT 3:
100 200
OUTPUT 3:
100
*/

#include <iostream>

using namespace std;

int main()
{
  int num1, num2;
  
  cin >> num1 >> num2;
  
  cout << num2 - num1;
  
  return 0;
}
