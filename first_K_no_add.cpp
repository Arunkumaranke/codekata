#include <iostream>
using namespace std;

int main()
{
    int noOfElements, noOfAddElements;
    int ele, sum = 0;
    
    cin >> noOfElements >> noOfAddElements;
    
    while(noOfElements-- > 0)
    {
        cin >> ele;
        if(noOfAddElements-- > 0)
            sum += ele;
    }
    
    cout << sum;
    
    return 0;
}
