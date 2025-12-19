#include <iostream>
using namespace std;

int main() {
    double x, y;
    double cx = 2;
    double cy = -1;
    double r = 5;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;
    double distSquared = (x - cx) * (x - cx) + (y - cy) * (y - cy);
    double rSquared = r * r;
    if (distSquared < rSquared) {
        cout << "Точка внутри окружности" << endl;
    } else if (distSquared == rSquared) {
        cout << "Точка на границе окружности" << endl;
    } else {
        cout << "Точка вне окружности" << endl;
    }
    return 0;
}
