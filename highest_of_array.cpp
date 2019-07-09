#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

int main(){
    
    int noOfInput = 3;
    int highest = INT_MIN;
    int input;
    
    while(noOfInput--)
    {
        cin >> input;
        if(highest == INT_MIN)
            highest = input;
        else if( highest < input )
            highest = input;
    }
    
    cout << highest;
    
    return 0;
}
