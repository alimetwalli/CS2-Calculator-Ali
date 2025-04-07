#include "calculator.h"
#include <iostream>
#include <cstdlib> // for rand()
using namespace std;

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        cout << "cant divide by 0" << endl;
        return 0;
    }
    return a / b;
}

int Calculator::factorial(int n) {
    if (n < 0) {
        cout << "no -ve factorials" << endl;
        return -1;
    }
    if (n == 0||n == 1) 
    {
        return 1;
    }
    return n*factorial(n-1);
}

int Calculator::GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b,a%b);
}

int Calculator::LCM(int a, int b) {
    return (a*b) / GCD(a,b);
}

int Calculator::randomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}