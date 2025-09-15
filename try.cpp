#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    float a, b, c;
    char d; //gret
    int p = 0;

    if(p == 1);
        cout << "first number: ";
        cin >> a;

        cout << "Add (+, -, *, /) ";
        cin >> d;

        cout << "second number: ";
        cin >> b;

        if(d == '+') {
           c = a + b;
        }
        else if(d == '-') {
           c = a - b;
        }
        else if(d == '*') {
           c = a * b;
        }
        else if(d == '/') {
            if (b != 0 )
                c = a / b;
            else
                cout << "\nWRITE CORRETLY";
        }
    else {
        cout << "\nWrite correttly";
        
    }
    cout << "\nResult = " << c << endl;
    
}
