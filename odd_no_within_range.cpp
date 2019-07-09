#include <iostream>
using namespace std;

int main()
{
    int start, end, ele;
    int flag = 0;
    
    cin >> start >> end;
    ele = start + 1 ;
    while(ele < end)
    {
        if( ele % 2 )
        {
            if(flag)
                cout << " ";
            cout << ele ;
            flag = 1;
        }
        
        ele++;
    }
    return 0;
}
