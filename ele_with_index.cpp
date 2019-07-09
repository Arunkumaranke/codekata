#include <iostream>
using namespace std;

int main()
{
    int eleCount, *eleArray;
    
    cin >> eleCount;
    
    eleArray = new int[eleCount];
    
    for(int ind = 0; ind < eleCount; ind++)
    {
        cin >> eleArray[ind];
    }
    
    for(int ind = 0; ind < eleCount-1; ind++)
    {
        cout << eleArray[ind] << " " << ind << endl;
    }
    
    cout << eleArray[eleCount-1] << " " << eleCount-1;
    
    return 0;
    
}
