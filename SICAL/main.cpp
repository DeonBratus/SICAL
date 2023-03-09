#include "Simpleclc.h"
#include <iostream>

using namespace std;

int main() {
    char StopWorld[] = "stop";
    char RStopWorld[4];
    cout << "_______________________________________________________" << endl;
    cout << "Print <strt> to launch calculator, print <stop> to exit" << endl;
    cout << "_______________________________________________________" << endl;
    while (1 == 1) {
        for (int i = 0; i < 4; i++) {
            cin >> RStopWorld[i];
        }
        if (strcmp(RStopWorld, "strt") == 115) {
            cout << "STARTED!" << endl;
            smplClc();
        } else {
            if (strcmp(RStopWorld, "stop") == 115) {
                cout << "STOPED";
                break;
            } else {
                cout << "Incorrect command" << endl;
            }
        }
    }
    return 0;
}