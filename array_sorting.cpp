#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int eleCount, *eleArray;
    
    cin >> eleCount;
    
    eleArray = new int[eleCount];
    
    for(int ind = 0; ind < eleCount; ind++)
        cin >> eleArray[ind];
        
    for(int currInd = 0; currInd < eleCount-1; currInd++)
    {
        for(int nextInt = currInd+1; nextInt < eleCount; nextInt++)
        {
            if(eleArray[currInd] > eleArray[nextInt])
            {
                int temp = eleArray[currInd];
                eleArray[currInd] = eleArray[nextInt];
                eleArray[nextInt] = temp;
            }
        }
        cout << eleArray[currInd] << " ";
    }
    cout << eleArray[eleCount-1];
    return 0;
    
}
