#include <iostream>

int sm(float a, float b) {
    a = a + b;
    std::cout << "Answer:" << a << std::endl;
    a = 0; b = 0;
    return 0;

}

int mlt(float a, float b) {
    a = a * b;
    std::cout << "Answer: " << a << std::endl;
    a = 0; b = 0;
    return 0;
}

int sq(int a, int c) {
    int b = a;
    for (int i = 1; i < c; ++i) {
        b *= a;
    }
    std::cout << "Answer: " << b << std::endl;
    a = 0; b = 0;
return 0;
}
