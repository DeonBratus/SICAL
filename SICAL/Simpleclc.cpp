/*Simple calculator. It can calculate simple math action and output result.
 * Addition, Subtraction, Multiplication, Division, Square.
 */
#include "typeact.h"
#include <iostream>

using namespace std;

int smplClc() {
    float num1 = 0, num2 = 0;
    char act = ' ';
    cin >> num1 >> act >> num2;

    switch (act) {
        case '+':
            sm(num1, num2);
            break;
        case '-':
            sm(num1, -num2);
            break;
        case '/':
            mlt(num1, 1 / num2);
            break;
        case '*':
            mlt(num1, num2);
            break;
        case '^':
            sq((int) num1, (int) num2);
            break;
        default:
            cout << "Error" << endl;
            break;


    }
    return 0;
}
