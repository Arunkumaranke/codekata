#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int eleCount, element;
    int highest = INT_MIN;
    
    cin >> eleCount;
    
    while(eleCount--)
    {
        cin >> element;
        
        if(highest == INT_MIN || element > highest)
            highest = element;
    }
    
    cout << highest;
    
    return 0;
    
}
