#include <iostream>

using namespace std;

int add(int first, int second) {
    return first + second;
}

int subtract(int first, int second){
    return first - second;
}

int multiply(int first, int second) {
    return first * second;
}

double division(double first, double second){
    return first / second;
}

int operation(int first, int second, int (*functocall)(int, int)){
    return (*functocall)(first, second);
}

double operation(int first, int second, int (*functocall)(double, double)){
    return (*functocall)(first, second);
}


int main() {
    int a, b;
    double   c,d;
    int (*plus)(int, int) = add;
    int (*minus)(int, int) = subtract;
    int (*mult)(int, int) = multiply;
    double (*div)(double, double) = division;
    a = operation(7, 5, plus);
    b = operation(20, a, minus);
    c = operation(3,5,div);
    d = operation(2,3,mult);
    cout << "a = " << a << " and b = " << b << endl;
    cout << "c = " << c << " and d = " << d << endl;

    return 0;
}
