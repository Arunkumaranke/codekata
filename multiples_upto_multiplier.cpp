#include <iostream>
using namespace std;

int main()
{
    int num, multipler_limt = 5;
    cin >> num;
    
    for(int multipler = 1; multipler <= multipler_limt; multipler++)
    {
        cout << multipler*num;
        if(multipler != multipler_limt)
        cout << " ";
    }
    
    return 0;
}
