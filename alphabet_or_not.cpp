#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    int flag = 0;
    char input;
    
    cin >> input;
    if ((input >= 65 && input <= 90) || (input >= 97 && input <= 122))
    {
        cout << "Alphabet";
    }
    else{
        cout << "No";
    }
    return 0;
}
