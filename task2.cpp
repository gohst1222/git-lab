#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double h;
    cout << "Enter h (e.g. 1.0): ";
    cin >> h;

    // Обчислення коефіцієнтів
    double a = exp(h) + sqrt(1 + h * h * pow(sin(h + 2), 2) + pow(h, 4) * pow(sin(h + 4), 4));
    double b = log(a) - sqrt(4 + pow(tan(h), 3) + pow(log(a), 3));
    double c = a * h * cosh(b * h) + b * h * sinh(a * h);

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // Квадратне рівняння: c*x^2 + b*x + a = 0 (або a*x^2 + b*x + c = 0)
    // У вас вказано: ax^2 + bx + c = 0
    double D = b * b - 4 * a * c;

    if (D < 0) {
        cout << "No real roots" << endl;
    } else if (D == 0) {
        double x = -b / (2 * a);
        cout << "One real root: x = " << x << endl;
    } else {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Two real roots: x1 = " << x1 << ", x2 = " << x2 << endl;
    }

    return 0;
}


