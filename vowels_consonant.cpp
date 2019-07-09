#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string vowels = "aeiou";
    int flag = 0;
    char input;
    
    cin >> input;
    if ((input >= 65 && input <= 90) || (input >= 97 && input <= 122))
    {
        if(input >= 65 && input <= 90)
        {
            input += 32;
        }
        for(int ind = 0; vowels[ind] != '\0'; ind++)
        {
            if(vowels[ind] == input)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout << "Vowel";
        }
        else{
            cout << "Consonant";
        }
    }
    else{
        cout << "invalid";
    }
    return 0;
}
