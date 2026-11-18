#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int mn = (a < b) ? a : b;
    cout << "Minimum = " << mn << endl;
    return 0;
}

