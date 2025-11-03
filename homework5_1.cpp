#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14;
    double r;
    cout << "Введите радиус: ";
    cin >> r;
    double area = PI * r * r;
    cout << "Площадь круга: " << area << endl;
    return 0;
}
