#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int eleCount, element;
    int lowest = INT_MAX;
    
    cin >> eleCount;
    
    while(eleCount--)
    {
        cin >> element;
        
        if(lowest == INT_MAX || element < lowest)
            lowest = element;
    }
    
    cout << lowest;
    
    return 0;
    
}
