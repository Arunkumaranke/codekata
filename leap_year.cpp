#include <iostream>
using namespace std;

int main(){
    
    int inputYear;
    cin >> inputYear;
    
    if((inputYear % 4 == 0 && inputYear % 100 != 0) || (inputYear % 100 == 0  && inputYear % 400 == 0))
        cout << "yes";
    else
        cout << "no";
    
    return 0;
}
