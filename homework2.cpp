##include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите третье число: ";
    cin >> c;
    double average = (a + b + c) / 3;
    cout << "Среднее арифметическое: " << average << endl;
    return 0;
}
