#include <iostream>
using namespace std;

int main()
{
    int start, end, ele;
    int sp = 0;
    
    cin >> start >> end;
    ele = start + 1 ;
    while(ele < end)
    {
        int flag = 1;
        
        for(int divisor = 2; divisor <= ele/2; divisor++)
        {
            if(ele % divisor == 0)
            {
                flag =0;
                break;
            }
        }
        
        if( flag )
        {
            if(sp)
                cout << " ";
            cout << ele ;
            sp = 1;
        }
        
        ele++;
    }
    
    return 0;
}
