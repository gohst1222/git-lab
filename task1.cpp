#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Enter x and y: ";
    cin >> x >> y;

    // Приклад перевірки області D (відповідно до вашого малюнка Варіанту 8)
    // Наприклад, область обмежена колами/прямокутниками:
    bool inDomain = (x >= -2 && x <= 5 && y >= -1 && y <= 2); // спрощена перевірка для прикладу

    double u;
    if (inDomain) {
        u = y * y * x - sin(x);
    } else {
        // Перевірка на переповнення/допустимі області для ctg та sqrt
        double inner_arg = sin(y + x) + 10;
        double cos_val = cos(x * y + 1);
        u = (1.0 / tan(inner_arg)) - sqrt(cos_val * cos_val);
    }

    cout << "u = " << u << endl;
    return 0;
}

