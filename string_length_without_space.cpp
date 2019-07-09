#include <iostream>
using namespace std;

int main()
{
    char str[1000];
    int count = 0;
    
    cin.getline(str, 1000);
    
    for(int ind = 0; str[ind] != 0; ind++)
    {
        if(str[ind] != ' ')
            count++;
    }
    
    cout << count;
    
    return 0;
    
}
