#include <iostream>
using namespace std;

int main()
{
    int input, hour, min;
    
    cin >> input;
    
    hour = input / 60;
    min = input % 60;
    
    cout << hour << " " << min;
    
    return 0;
    
}
