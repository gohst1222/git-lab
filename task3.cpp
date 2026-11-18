#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, x_in;
    cout << "Enter a, b, c, d, x (for sin(x)): ";
    cin >> a >> b >> c >> d >> x_in;

    double y = tan(b) - sqrt(16 + 1.0 / tan(exp(d))); // приблизно за формулою ctg(e^d) -> 1/tan
    double x = sqrt(fabs(cos(a * a * (c + 1)) + sin(M_PI * d + a)));

    double z;
    if (y > 0) {
        z = (pow(x, 3) - 1) / (1 + pow(sin(x_in), 2)) * y; // адаптовано під умову
    } else {
        z = (sqrt(pow(y, 3) - pow(x, 4) + 1)) / (1 - y);
    }

    cout << "y = " << y << ", x = " << x << ", z = " << z << endl;
    return 0;
}
