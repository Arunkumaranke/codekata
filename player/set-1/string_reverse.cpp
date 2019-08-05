#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    unsigned ind = 0;

    getline(cin, s);
    
    
    while(ind < s.length()/2)
    {
       char ch = s.at(ind);
       s.at(ind) = s.at(s.length()-1-ind);
       s.at(s.length()-1-ind) = ch;
       ind++;
    }
    
    cout << s;
    return 0;
}
