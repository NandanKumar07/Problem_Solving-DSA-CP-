#include<bits/stdc++.h>
using namespace std;

double findDerivative(double (*function1)(double), double x, double h = 1e-5) {
    return (function1(x + h) - function1(x)) / h;
}

double function1(double x) {
    return (x*x + sin(x));
}

int main() {
    // point at which to find the derivative 
    double x_value = 1.0;

    // calculate the derivative
    double derivative = findDerivative(function1, x_value);
    cout<<"Derivative at x: "<<x_value<<" : "<< derivative<<endl;
}