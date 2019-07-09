#include <iostream>
using namespace std;

int main()
{
    int start, end, ele;
    
    cin >> start >> end;
    ele = start + 1 ;
    while(ele < end)
    {
        if( ele % 2 )
        {
            cout << ele << " ";
        }
        ele++;
    }
    
    cout << endl;
    
    return 0;
}
