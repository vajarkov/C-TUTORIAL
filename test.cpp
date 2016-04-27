#include <iostream>
using namespace std;

int main()
{
    /* ... */

    char c = '\0';
    bool s = true;
    while (cin.get(c)) {
        if(c==' ' & s){
            cout<<c;
            s=false;
        } else {
            cout<<c;
            s=true;
        }
           
    }

	return 0;
}